# En un juego de preguntas a las que se responde “Si” o “No” gana quien responda correctamente las tres preguntas. Si se responde mal a cualquiera de ellas ya no se pregunta la siguiente y termina el juego. 
print('\nResponda "Si" o "No" de acuerdo a la pregunta.\n')

pregunta1 = input('¿Cristobal Colón descubrió América?: ')

if pregunta1 == 'Si' or pregunta1 == 'si' or pregunta1 == 'SI':
    pregunta2 = input('¿La independencia de Colombia fue en el año 1810?: ')
    if pregunta2 == 'Si' or pregunta2 == 'si' or pregunta2 == 'SI':
        pregunta3 = input('The Strokes es un grupo de rock Americano?: ')
        if pregunta3 == 'Si' or pregunta3 == 'si' or pregunta3 == 'SI':
           print('\nTodas las respuestas son correctas.\n')
        else:
            print('\nRespuesta incorrecta vuelve a intentarlo.\n')
    else:
        print('\nRespuesta incorrecta vuelve a intentarlo.\n')
else:
    print('\nRespuesta incorrecta vuelve a intentarlo.\n')