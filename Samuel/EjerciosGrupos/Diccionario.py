diccionario = {'Sevicia':
                'Significado:\nCrueldad excesiva. \nEj: El criminal atacó a su victima con sevicia. ',
                'Lacónico':
                'Significado:\nEs la forma de expresarse breve y concisamente, con las palabras justas y, a la vez ingeniosamente. \nEj: Tratamos de mantener una conversación pero el hombre era lacónico.',
                'Exulansis':
                'Significado:\nLa tendencia a renunciar a hablar acerca de una experiencia porque la gente es incapaz de entenderla. \nEj: Mi constante exulansis me impidio hablar.',
                'Ademán':
                'Significado:\nMovimiento o actitud del cuerpo o de alguna parte suya con que se manifiesta disposición, intención o sentimiento. \nEj: Hizó ademán de huir.',
                'Estridente':
                'Significado:\nPresenta un contraste violento o produce una impresion fuerte. \nEj: Su llegada fue estridente a los ojos de los espectadores.'}

print('\n\n★ ★ ★ ★ ★ ★ ★ ★ Bienvenido a su diccionario ★ ★ ★ ★ ★ ★ ★ ★')
palabra=(input('       ¿De que palabra desea ver el significado?\n\n                     1. Sevicia\n\n                     2. Lacónico\n\n                     3. Exulansis\n\n                     4. Ademán\n\n                     5. Estridente\n\n                   Digite su palabra: '))

try: 
    print('\n\n',diccionario[palabra])
except:
    print('\n\nPalabra no encontrada')
