DEFINE CLASS Nodo AS Custom
    valor = ""
    izquierda = .NULL.
    derecha = .NULL.
ENDDEFINE

? "Recorrido Prefijo:"
RecorridoPrefijo(loArbol)

? "Recorrido Infijo:"
RecorridoInfijo(loArbol)

? "Recorrido Posfijo:"
RecorridoPosfijo(loArbol)

LOCAL lcExpresion
lcExpresion = "[ ( a + b ) / ( c * ( d - e ) ) ]"
lcExpresion = STRTRAN(lcExpresion, " ", "")  && Eliminar espacios en blanco

FUNCTION ConstruirArbol
LPARAMETERS lcExpresion
LOCAL lnIndex, laPila[1], lnTopo, loCaracter, loNodo

lnTopo = 0
FOR lnIndex = 1 TO LEN(lcExpresion)
    loCaracter = SUBSTR(lcExpresion, lnIndex, 1)
    IF ATC(loCaracter, "+-*/", 1) > 0
        loNodo = CREATEOBJECT("Nodo")
        loNodo.valor = loCaracter
        loNodo.derecha = laPila[lnTopo]
        laPila[lnTopo] = .NULL.
        lnTopo = lnTopo - 1
        loNodo.izquierda = laPila[lnTopo]
        laPila[lnTopo] = loNodo
    ELSE
        loNodo = CREATEOBJECT("Nodo")
        loNodo.valor = loCaracter
        lnTopo = lnTopo + 1
        laPila[lnTopo] = loNodo
    ENDIF
ENDFOR
RETURN laPila[1]
ENDFUNC

FUNCTION RecorridoPrefijo
LPARAMETERS loNodo
IF !ISNULL(loNodo)
    ? loNodo.valor
    RecorridoPrefijo(loNodo.izquierda)
    RecorridoPrefijo(loNodo.derecha)
ENDIF
ENDFUNC

FUNCTION RecorridoInfijo
LPARAMETERS loNodo
IF !ISNULL(loNodo)
    RecorridoInfijo(loNodo.izquierda)
    ? loNodo.valor
    RecorridoInfijo(loNodo.derecha)
ENDIF
ENDFUNC

FUNCTION RecorridoPosfijo
LPARAMETERS loNodo
IF !ISNULL(loNodo)
    RecorridoPosfijo(loNodo.izquierda)
    RecorridoPosfijo(loNodo.derecha)
    ? loNodo.valor
ENDIF
ENDFUNC

loArbol = ConstruirArbol(lcExpresion[2, LEN(lcExpresion) - 2])  && Crear el árbol sin los corchetes iniciales y finales

? "Recorrido Prefijo:"
RecorridoPrefijo(loArbol)

? "Recorrido Infijo:"
RecorridoInfijo(loArbol)

? "Recorrido Posfijo:"
RecorridoPosfijo(loArbol)
