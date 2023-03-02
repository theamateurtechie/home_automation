import mysql_connector
def insertBlob(serial_no,commands):
    print("Inserting BLOB into command_host table")
    try:
        connection=mysql_connector.connect(host='localhost',database='mysql')
        cursor=connection.cursor()
        file=commands
        sql_insert_blob_query = """ INSERT INTO command_host
                          (serial_no,commands) VALUES (%s,%s,%s,%s)"""

        insert_blob_tuple=(serial_no,file)
        result=cursor.execute(sql_insert_blob_query,insert_blob_tuple)
        connection.commit()
        print("command inserted successfully as a BLOB in command_host table",result)

    except mysql_connector.Error as error:
        print("failed inserting data into MySQL table {}".format(error))    

