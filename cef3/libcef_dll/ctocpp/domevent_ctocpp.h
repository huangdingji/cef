// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOMEVENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOMEVENT_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_dom.h"
#include "include/capi/cef_dom_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDOMEventCToCpp
    : public CefCToCpp<CefDOMEventCToCpp, CefDOMEvent, cef_domevent_t> {
 public:
  explicit CefDOMEventCToCpp(cef_domevent_t* str)
      : CefCToCpp<CefDOMEventCToCpp, CefDOMEvent, cef_domevent_t>(str) {}
  virtual ~CefDOMEventCToCpp() {}

  // CefDOMEvent methods
  virtual CefString GetType() OVERRIDE;
  virtual Category GetCategory() OVERRIDE;
  virtual Phase GetPhase() OVERRIDE;
  virtual bool CanBubble() OVERRIDE;
  virtual bool CanCancel() OVERRIDE;
  virtual CefRefPtr<CefDOMDocument> GetDocument() OVERRIDE;
  virtual CefRefPtr<CefDOMNode> GetTarget() OVERRIDE;
  virtual CefRefPtr<CefDOMNode> GetCurrentTarget() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_DOMEVENT_CTOCPP_H_
