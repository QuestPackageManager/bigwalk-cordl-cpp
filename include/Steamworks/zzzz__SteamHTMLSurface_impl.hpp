#pragma once
// IWYU pragma private; include "Steamworks/SteamHTMLSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamHTMLSurface_def.hpp"
#include "Steamworks/zzzz__EHTMLKeyModifiers_def.hpp"
#include "Steamworks/zzzz__EHTMLMouseButton_def.hpp"
#include "Steamworks/zzzz__HHTMLBrowser_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamHTMLSurface::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ad100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamHTMLSurface::Shutdown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805adbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.CreateBrowser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW, ::StringW)>(&::Steamworks::SteamHTMLSurface::CreateBrowser)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805acc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"CreateBrowser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.RemoveBrowser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::RemoveBrowser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"RemoveBrowser", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.LoadURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::StringW, ::StringW)>(&::Steamworks::SteamHTMLSurface::LoadURL)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805ad2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"LoadURL", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t, uint32_t)>(&::Steamworks::SteamHTMLSurface::SetSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805adb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetSize", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.StopLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::StopLoad)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805adc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"StopLoad", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.Reload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::Reload)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Reload", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::GoBack)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GoBack", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.GoForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::GoForward)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GoForward", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.AddHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::StringW, ::StringW)>(&::Steamworks::SteamHTMLSurface::AddHeader)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805aca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"AddHeader", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.ExecuteJavascript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::StringW)>(&::Steamworks::SteamHTMLSurface::ExecuteJavascript)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805ace00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"ExecuteJavascript", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.MouseUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::Steamworks::EHTMLMouseButton)>(&::Steamworks::SteamHTMLSurface::MouseUp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseUp", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.MouseDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::Steamworks::EHTMLMouseButton)>(&::Steamworks::SteamHTMLSurface::MouseDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseDown", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.MouseDoubleClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::Steamworks::EHTMLMouseButton)>(&::Steamworks::SteamHTMLSurface::MouseDoubleClick)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseDoubleClick", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.MouseMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, int32_t, int32_t)>(&::Steamworks::SteamHTMLSurface::MouseMove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ad4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseMove", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.MouseWheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, int32_t)>(&::Steamworks::SteamHTMLSurface::MouseWheel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseWheel", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.KeyDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t, ::Steamworks::EHTMLKeyModifiers, bool)>(&::Steamworks::SteamHTMLSurface::KeyDown)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ad1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyDown", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.KeyUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t, ::Steamworks::EHTMLKeyModifiers)>(&::Steamworks::SteamHTMLSurface::KeyUp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ad250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyUp", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.KeyChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t, ::Steamworks::EHTMLKeyModifiers)>(&::Steamworks::SteamHTMLSurface::KeyChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ad180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyChar", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetHorizontalScroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t)>(&::Steamworks::SteamHTMLSurface::SetHorizontalScroll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ada10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetHorizontalScroll", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetVerticalScroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, uint32_t)>(&::Steamworks::SteamHTMLSurface::SetVerticalScroll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805adb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetVerticalScroll", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetKeyFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, bool)>(&::Steamworks::SteamHTMLSurface::SetKeyFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ada60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetKeyFocus", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.ViewSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::ViewSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805adc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"ViewSource", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.CopyToClipboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::CopyToClipboard)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805acc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"CopyToClipboard", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.PasteFromClipboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::PasteFromClipboard)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"PasteFromClipboard", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::StringW, bool, bool)>(&::Steamworks::SteamHTMLSurface::Find)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805acf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Find", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.StopFind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::StopFind)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805adc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"StopFind", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.GetLinkAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, int32_t, int32_t)>(&::Steamworks::SteamHTMLSurface::GetLinkAtPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ad020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GetLinkAtPosition", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetCookie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, ::StringW, uint32_t, bool, bool)>(&::Steamworks::SteamHTMLSurface::SetCookie)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1805ad710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetCookie", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetPageScaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, float_t, int32_t, int32_t)>(&::Steamworks::SteamHTMLSurface::SetPageScaleFactor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805adab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetPageScaleFactor", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetBackgroundMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, bool)>(&::Steamworks::SteamHTMLSurface::SetBackgroundMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetBackgroundMode", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.SetDPIScalingFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, float_t)>(&::Steamworks::SteamHTMLSurface::SetDPIScalingFactor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetDPIScalingFactor", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.OpenDeveloperTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser)>(&::Steamworks::SteamHTMLSurface::OpenDeveloperTools)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ad5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"OpenDeveloperTools", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.AllowStartRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, bool)>(&::Steamworks::SteamHTMLSurface::AllowStartRequest)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805acbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"AllowStartRequest", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.JSDialogResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, bool)>(&::Steamworks::SteamHTMLSurface::JSDialogResponse)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ad130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"JSDialogResponse", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTMLSurface.FileLoadDialogResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HHTMLBrowser, ::System::IntPtr)>(&::Steamworks::SteamHTMLSurface::FileLoadDialogResponse)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805aced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"FileLoadDialogResponse", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamHTMLSurface::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamHTMLSurface::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamHTMLSurface::CreateBrowser(::StringW  pchUserAgent, ::StringW  pchUserCSS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"CreateBrowser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, pchUserAgent, pchUserCSS);
}
inline void Steamworks::SteamHTMLSurface::RemoveBrowser(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"RemoveBrowser", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::LoadURL(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPostData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"LoadURL", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, pchURL, pchPostData);
}
inline void Steamworks::SteamHTMLSurface::SetSize(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unWidth, uint32_t  unHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetSize", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, unWidth, unHeight);
}
inline void Steamworks::SteamHTMLSurface::StopLoad(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"StopLoad", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::Reload(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Reload", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::GoBack(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GoBack", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::GoForward(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GoForward", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::AddHeader(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"AddHeader", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, pchKey, pchValue);
}
inline void Steamworks::SteamHTMLSurface::ExecuteJavascript(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchScript)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"ExecuteJavascript", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, pchScript);
}
inline void Steamworks::SteamHTMLSurface::MouseUp(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseUp", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, eMouseButton);
}
inline void Steamworks::SteamHTMLSurface::MouseDown(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseDown", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, eMouseButton);
}
inline void Steamworks::SteamHTMLSurface::MouseDoubleClick(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseDoubleClick", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::Steamworks::EHTMLMouseButton>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, eMouseButton);
}
inline void Steamworks::SteamHTMLSurface::MouseMove(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseMove", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, x, y);
}
inline void Steamworks::SteamHTMLSurface::MouseWheel(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  nDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"MouseWheel", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, nDelta);
}
inline void Steamworks::SteamHTMLSurface::KeyDown(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers, bool  bIsSystemKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyDown", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers, bIsSystemKey);
}
inline void Steamworks::SteamHTMLSurface::KeyUp(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyUp", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}
inline void Steamworks::SteamHTMLSurface::KeyChar(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  cUnicodeChar, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"KeyChar", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EHTMLKeyModifiers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}
inline void Steamworks::SteamHTMLSurface::SetHorizontalScroll(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetHorizontalScroll", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, nAbsolutePixelScroll);
}
inline void Steamworks::SteamHTMLSurface::SetVerticalScroll(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetVerticalScroll", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, nAbsolutePixelScroll);
}
inline void Steamworks::SteamHTMLSurface::SetKeyFocus(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bHasKeyFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetKeyFocus", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, bHasKeyFocus);
}
inline void Steamworks::SteamHTMLSurface::ViewSource(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"ViewSource", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::CopyToClipboard(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"CopyToClipboard", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::PasteFromClipboard(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"PasteFromClipboard", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::Find(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchSearchStr, bool  bCurrentlyInFind, bool  bReverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"Find", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}
inline void Steamworks::SteamHTMLSurface::StopFind(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"StopFind", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::GetLinkAtPosition(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"GetLinkAtPosition", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, x, y);
}
inline void Steamworks::SteamHTMLSurface::SetCookie(::StringW  pchHostname, ::StringW  pchKey, ::StringW  pchValue, ::StringW  pchPath, uint32_t  nExpires, bool  bSecure, bool  bHTTPOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetCookie", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}
inline void Steamworks::SteamHTMLSurface::SetPageScaleFactor(::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flZoom, int32_t  nPointX, int32_t  nPointY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetPageScaleFactor", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, flZoom, nPointX, nPointY);
}
inline void Steamworks::SteamHTMLSurface::SetBackgroundMode(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bBackgroundMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetBackgroundMode", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, bBackgroundMode);
}
inline void Steamworks::SteamHTMLSurface::SetDPIScalingFactor(::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flDPIScaling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"SetDPIScalingFactor", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, flDPIScaling);
}
inline void Steamworks::SteamHTMLSurface::OpenDeveloperTools(::Steamworks::HHTMLBrowser  unBrowserHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"OpenDeveloperTools", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle);
}
inline void Steamworks::SteamHTMLSurface::AllowStartRequest(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bAllowed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"AllowStartRequest", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, bAllowed);
}
inline void Steamworks::SteamHTMLSurface::JSDialogResponse(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"JSDialogResponse", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, bResult);
}
inline void Steamworks::SteamHTMLSurface::FileLoadDialogResponse(::Steamworks::HHTMLBrowser  unBrowserHandle, ::System::IntPtr  pchSelectedFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTMLSurface*>(),
                        {"FileLoadDialogResponse", {}, {::i2c::type_of<::Steamworks::HHTMLBrowser>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unBrowserHandle, pchSelectedFiles);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamHTMLSurface::SteamHTMLSurface()   {
}
