///$Header
/// ============================================================================
///		Author		: M. Ivanchenko
///		Date create	: 05-10-2014
///		Date update	: 05-10-2014
///		Comment		:
/// ============================================================================
#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__

#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

namespace template_qt
{

    class widget_central;
/// ############################################################################
///			class main_window
/// ############################################################################
	class main_window : public QMainWindow
	{
		Q_OBJECT

    /// ========================================================================
    ///		CONSTRUCTORS/DESTRUCTOR
    /// ========================================================================
	private:
		main_window( const main_window &rhs );

	public:
		explicit main_window( QWidget *parent = 0 );
		~main_window( );

    /// ========================================================================
    ///		FUNCTIONS
    /// ========================================================================
	private:
		void initialize( );
		void window_center( );

	public:
        void append_title_text( const QString &text );

    /// ========================================================================
    ///		SLOTS
    /// ========================================================================
	private slots:

    /// ========================================================================
    ///		PROPERTIES
    /// ========================================================================
	private:

	public:

    /// ========================================================================
    ///		OPERATORS
    /// ========================================================================
	private:
		main_window& operator=( const main_window &rhs );

	public:

    /// ========================================================================
    ///			FIELDS
    /// ========================================================================
    private:
        widget_central *_workspace;

	};//class main_window

/// ############################################################################
//-----------------------------------------------------------------------------

}//namespace template_qt

#endif // __MAIN_WINDOW_H__
