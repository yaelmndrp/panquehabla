import os

dias_archivos = 1
horas_archivos = 24

DIAS_MAX = 1
HORAS_MAX = 24
MINUTOS_MAX = 60
SEGUNDOS_MAX = 60

carpeta = os.path.join(os.path.expanduser("~"), "Desktop", "pan_que_habla")
os.makedirs(carpeta, exist_ok=True)

while True:
    nombre_archivo = f"pan_que_habla_{dias_archivos}_{horas_archivos}.txt"
    ruta_archivo = os.path.join(carpeta, nombre_archivo)

    with open(ruta_archivo, "w", encoding="utf-8") as f:
        dias = DIAS_MAX
        horas = HORAS_MAX
        minutos = MINUTOS_MAX
        segundos = SEGUNDOS_MAX

        while True:
            texto = (
                f"faltan {dias} dias, {horas} horas, "
                f"{minutos} minutos y {segundos} segundos "
                "para la celebracion del dia del pan que habla"
            )

            f.write(texto + "\n")

            if segundos > 0:
                segundos -= 1
            else:
                segundos = 59
                if minutos > 0:
                    minutos -= 1
                else:
                    minutos = 59
                    if horas > 0:
                        horas -= 1
                    else:
                        horas = 23
                        if dias > 0:
                            dias -= 1
                        else:
                            break

    if horas_archivos > 0:
        horas_archivos -= 1
    else:
        horas_archivos = 23
        if dias_archivos > 0:
            dias_archivos -= 1
        else:
            break

print("✅ Todos los archivos fueron generados.")
