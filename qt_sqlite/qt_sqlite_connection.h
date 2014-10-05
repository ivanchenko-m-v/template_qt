//$Header
//=============================================================================
//		Author		: M. Ivanchenko
//		Date create	: 10-06-2013
//		Date update	: 10-06-2013
//		Comment		:
//=============================================================================
#ifndef __QT_SQLITE_CONNECTION_H__
#define __QT_SQLITE_CONNECTION_H__

#include <QString>

class sqlite3;

namespace espira
{

namespace db
{

    class qt_sqlite_command;

	//##########################################################################
    //			class qt_sqlite_connection
	//##########################################################################
    class qt_sqlite_connection
	{
		//======================================================================
		//			CONSTRUCTORS/DESTRUCTOR
		//======================================================================
	public:
        qt_sqlite_connection( const QString &s_db_path = QString( ) ) :
            _pdb( 0 ),
            _db_path( s_db_path )
		{ }

        virtual ~qt_sqlite_connection( );

		//======================================================================
		//			FUNCTIONS
		//======================================================================
	private:

	public:
        //----------------------------------------------------------------------
        void check_connection_properties( );
        //----------------------------------------------------------------------
        void open( );
		//----------------------------------------------------------------------
        void close( );
		//----------------------------------------------------------------------
        qt_sqlite_command* create_command( const QString &s_cmd_text );
		//----------------------------------------------------------------------
        QString last_error_msg( ) const;

        //======================================================================
        //			PROPERTIES
        //======================================================================
    public:
        //----------------------------------------------------------------------
        const QString& db_path( ) const
        { return this->_db_path;}
        //----------------------------------------------------------------------
        void db_path( const QString &s_db_path )
        {
            this->_db_path = s_db_path;
        }

		//======================================================================
		//			FIELDS
		//======================================================================
	private:
		//указатель на объект БД sqlite3 API
		sqlite3 *_pdb;

        QString _db_path;
		//контейнер созданных команд
		//контейнер созданных транзакций

	};
    //class qt_sqlite_connection
	//##########################################################################

}//namespace db

}//namespace espira
#endif // __QT_SQLITE_CONNECTION_H__
