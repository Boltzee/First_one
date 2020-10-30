import shutil 
import psutil

def check_cpu_usage():
    cp= psutil.cpu_percent(10)
    return cp<75

if not check_cpu_usage():
    print('error')
else:
    print('everything is ok')

