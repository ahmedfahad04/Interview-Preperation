'''
Statement: Calculate mirror time of a given time
Sample I/O
Input: 7:20
Output: 4:40
'''

given_time = input("Enter time (hh:mm): ")
hour, minute = given_time.split(':')
hour = int(hour)
minute = int(minute)

if hour >= 12:
    mirror_hour = 23-hour + 12
    mirror_minute = 60-minute
else:
    mirror_hour = 11-hour
    mirror_minute = 60-minute
    
if mirror_hour < 10:
    mirror_hour = '0'+str(mirror_hour)
    
if mirror_minute < 10:
    mirror_minute = '0'+str(mirror_minute)

print(str(mirror_hour)+ ':'+ str(mirror_minute))