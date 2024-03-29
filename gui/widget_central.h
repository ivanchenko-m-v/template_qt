/// $Header
/// ============================================================================
///		Author		: M. Ivanchenko
///		Date create	: 05-10-2014
///		Date update	: 05-10-2014
///		Comment		:
/// ============================================================================
#ifndef __WIDGET_CENTRAL_H__
#define __WIDGET_CENTRAL_H__

#include <QWidget>
#include <QPushButton>
#include <QToolButton>
#include <QAction>
#include <QMenu>

namespace template_qt
{

/// ############################################################################
///			class widget_central
/// ############################################################################
    class widget_central : public QWidget
    {
    Q_OBJECT
    /// ========================================================================
    ///		CONSTRUCTORS/DESTRUCTOR
    /// ========================================================================
    private:
        /// --------------------------------------------------------------------
        widget_central( const widget_central &rhs );

	public:
        /// --------------------------------------------------------------------
        explicit widget_central(QWidget *parent = 0);
        /// --------------------------------------------------------------------
        virtual ~widget_central( );

    /// ========================================================================
    ///		FUNCTIONS
    /// ========================================================================
    private:
        /// --------------------------------------------------------------------
        void initialize( );
        void init_layout();
        void init_connections( );
        /*
        QWidget* init_search_card( );
        QWidget* init_view_card( );
        QWidget* init_listview_request( );
        QWidget* init_buttons_search( );
        QWidget* init_buttons_listview( );

        void init_stat_menu( );
*/

    /// ========================================================================
    ///		PROPERTIES
    /// ========================================================================
    private:

	public:

    /// ========================================================================
    ///		OPERATORS
    /// ========================================================================
    private:
        /// --------------------------------------------------------------------
        widget_central& operator=( const widget_central &rhs );

    /// ========================================================================
    ///		EVENTS
    /// ========================================================================
	protected:
        virtual void keyPressEvent ( QKeyEvent * event );

    /// ========================================================================
    ///		SLOTS
    /// ========================================================================
    public slots:
        /// --------------------------------------------------------------------
        /*
        void slot_add_request( );
        void slot_edit_request( );
        void slot_del_request( );
        void slot_id_request_edit( );
        void slot_print_request( );
        void slot_print_preview_paint_requested(QPrinter *p) const;
        void slot_stat_report( );
        void slot_stat_diagram( );
        */

    /// ========================================================================
    ///			FIELDS
    /// ========================================================================
    private:
        /*
        widget_search_card  *_w_search;
        widget_card_view    *_w_view;
        listview_request    *_lv_request;

        QPushButton         *_btn_find_request;
        QPushButton         *_btn_clear_search_criteria;
        QPushButton         *_btn_add_request;
        QPushButton         *_btn_print_request;
        QPushButton         *_btn_edit_request;
        QPushButton         *_btn_edit_id_request;
        QPushButton         *_btn_del_request;

        QToolButton         *_btn_stat;

        QMenu               *_mnu_stat;
        QAction             *_act_report;
        QAction             *_act_diagram;
        */

	};//class widget_central
/// ############################################################################
/// ----------------------------------------------------------------------------

}//namespace template_qt

#endif // __WIDGET_CENTRAL_H__
