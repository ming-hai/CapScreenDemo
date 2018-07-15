#pragma once

namespace SOUI
{
	class CEdit9527 :public SRichEdit
	{
		SOUI_CLASS_NAME(CEdit9527, L"et9527")
	public:
		CEdit9527();
		~CEdit9527();
		void PaintToDC(HDC hdc);
	protected:
		LRESULT OnCreate(LPVOID);
		//void OnDestroy();
		bool OnKillFocus(EventArgs * e);
		bool OnEditNotify(EventArgs * e);
		virtual BOOL OnSetCursor(const CPoint &pt);
		void OnNcLButtonDown(UINT nHitTest, CPoint point);
		void OnNcMouseMove(UINT nHitTest, CPoint point);
		void OnNcLButtonUp(UINT nHitTest, CPoint point);
		void OnNcPaint(IRenderTarget *pRT);
		BOOL OnEraseBkgnd(IRenderTarget * pRT);
		void OnMouseHover(WPARAM wParam, CPoint ptPos);
		void OnMouseLeave();
		SOUI_MSG_MAP_BEGIN()
			MSG_WM_CREATE(OnCreate)
			MSG_WM_NCMOUSEMOVE(OnNcMouseMove)
			MSG_WM_NCLBUTTONDOWN(OnNcLButtonDown)
			MSG_WM_NCLBUTTONUP(OnNcLButtonUp)
			MSG_WM_NCPAINT_EX(OnNcPaint)
			MSG_WM_ERASEBKGND_EX(OnEraseBkgnd)
			MSG_WM_MOUSEHOVER(OnMouseHover)
			//MSG_WM_MOUSELEAVE(OnMouseLeave)
			//MSG_WM_DESTROY(OnDestroy)
		SOUI_MSG_MAP_END()

		BOOL	m_bDraging;
		CPoint  m_ptClick;
	};
}
