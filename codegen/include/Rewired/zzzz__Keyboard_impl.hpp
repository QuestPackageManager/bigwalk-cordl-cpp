#pragma once
// IWYU pragma private; include "Rewired/Keyboard.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_impl.hpp"
#include "Rewired/zzzz__ControllerWithMap_impl.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_impl.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__Keyboard_def.hpp"
#include "GlobalNamespace/zzzz__mgEoYhWDNSuilPYVDQosKwaMZrnc_def.hpp"
#include "GlobalNamespace/zzzz__uArTaRyygpuxWdJDbqGWbDpuXIZu_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/Internal/Glyphs/zzzz__KeyedGlyph_def.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/Internal/Localization/zzzz__LocalizedString_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "Rewired/zzzz__Keyboard_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__ModifierKey_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::Rewired::Keyboard_ModifierKeyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_ModifierKeyInfo::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Rewired::Keyboard_ModifierKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1817595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_ModifierKeyInfo.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Keyboard_ModifierKeyInfo::*)(bool)>(&::Rewired::Keyboard_ModifierKeyInfo::GetName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819225e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {"GetName", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_ModifierKeyInfo.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Keyboard_ModifierKeyInfo::*)(bool)>(&::Rewired::Keyboard_ModifierKeyInfo::GetKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819225d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {"GetKey", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_shortName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortName;
}
constexpr ::StringW const& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_shortName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortName;
}
constexpr void Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_set_shortName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shortName = value;
}
constexpr ::StringW& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_longName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longName;
}
constexpr ::StringW const& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_longName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longName;
}
constexpr void Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_set_longName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___longName = value;
}
constexpr ::StringW& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_shortKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortKey;
}
constexpr ::StringW const& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_shortKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortKey;
}
constexpr void Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_set_shortKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shortKey = value;
}
constexpr ::StringW& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_longKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longKey;
}
constexpr ::StringW const& Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_get_longKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___longKey;
}
constexpr void Rewired::Keyboard_ModifierKeyInfo::__cordl_internal_set_longKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___longKey = value;
}
inline void Rewired::Keyboard_ModifierKeyInfo::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::StringW Rewired::Keyboard_ModifierKeyInfo::GetName(bool  useShort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {"GetName", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, useShort);
}
inline ::StringW Rewired::Keyboard_ModifierKeyInfo::GetKey(bool  useShort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_ModifierKeyInfo*>(),
                        {"GetKey", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, useShort);
}
inline ::Rewired::Keyboard_ModifierKeyInfo* Rewired::Keyboard_ModifierKeyInfo::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_ModifierKeyInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_ModifierKeyInfo::Keyboard_ModifierKeyInfo()   {
}
//  Writing Method size for method: ::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::*)(::StringW, ::StringW)>(&::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819274c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*& Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_get_huiikMMgidAipJptCcJlmQCeegVBb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huiikMMgidAipJptCcJlmQCeegVBb;
}
constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* const& Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_get_huiikMMgidAipJptCcJlmQCeegVBb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huiikMMgidAipJptCcJlmQCeegVBb;
}
constexpr void Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_set_huiikMMgidAipJptCcJlmQCeegVBb(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huiikMMgidAipJptCcJlmQCeegVBb = value;
}
constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*& Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_get_tCYGGFREAMKqGSiVGDDjRomPMvnN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tCYGGFREAMKqGSiVGDDjRomPMvnN;
}
constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* const& Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_get_tCYGGFREAMKqGSiVGDDjRomPMvnN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tCYGGFREAMKqGSiVGDDjRomPMvnN;
}
constexpr void Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::__cordl_internal_set_tCYGGFREAMKqGSiVGDDjRomPMvnN(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tCYGGFREAMKqGSiVGDDjRomPMvnN = value;
}
inline void Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA* Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA()   {
}
//  Writing Method size for method: ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::*)(::Rewired::Internal::Localization::LocalizedString*)>(&::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::LocalizedString*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Internal::Localization::LocalizedString*& Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_get_shmqRKiaFQRgHjCcCisCDINLwTlN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shmqRKiaFQRgHjCcCisCDINLwTlN;
}
constexpr ::Rewired::Internal::Localization::LocalizedString* const& Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_get_shmqRKiaFQRgHjCcCisCDINLwTlN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shmqRKiaFQRgHjCcCisCDINLwTlN;
}
constexpr void Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_set_shmqRKiaFQRgHjCcCisCDINLwTlN(::Rewired::Internal::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shmqRKiaFQRgHjCcCisCDINLwTlN = value;
}
constexpr bool& Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_get_PNvTVkvzsXQFZyCgGLbVWndiKqyW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PNvTVkvzsXQFZyCgGLbVWndiKqyW;
}
constexpr bool const& Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_get_PNvTVkvzsXQFZyCgGLbVWndiKqyW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PNvTVkvzsXQFZyCgGLbVWndiKqyW;
}
constexpr void Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::__cordl_internal_set_PNvTVkvzsXQFZyCgGLbVWndiKqyW(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PNvTVkvzsXQFZyCgGLbVWndiKqyW = value;
}
inline void Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::LocalizedString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA* Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::New_ctor(::Rewired::Internal::Localization::LocalizedString*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA()   {
}
//  Writing Method size for method: ::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::*)(::Rewired::Internal::Glyphs::KeyedGlyph*)>(&::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Glyphs::KeyedGlyph*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Internal::Glyphs::KeyedGlyph*& Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_get_ndpqIBEdWYBzKlptKaLnAViRgKNIA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ndpqIBEdWYBzKlptKaLnAViRgKNIA;
}
constexpr ::Rewired::Internal::Glyphs::KeyedGlyph* const& Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_get_ndpqIBEdWYBzKlptKaLnAViRgKNIA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ndpqIBEdWYBzKlptKaLnAViRgKNIA;
}
constexpr void Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_set_ndpqIBEdWYBzKlptKaLnAViRgKNIA(::Rewired::Internal::Glyphs::KeyedGlyph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ndpqIBEdWYBzKlptKaLnAViRgKNIA = value;
}
constexpr bool& Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_get_HicPwNGDkgMfJSjKbkgnViqeRssw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HicPwNGDkgMfJSjKbkgnViqeRssw;
}
constexpr bool const& Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_get_HicPwNGDkgMfJSjKbkgnViqeRssw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HicPwNGDkgMfJSjKbkgnViqeRssw;
}
constexpr void Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::__cordl_internal_set_HicPwNGDkgMfJSjKbkgnViqeRssw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HicPwNGDkgMfJSjKbkgnViqeRssw = value;
}
inline void Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::_ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Glyphs::KeyedGlyph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA* Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::New_ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA()   {
}
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)(int32_t)>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1819275a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181859c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181859c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181927830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::*)()>(&::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181927830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_nlAwPcCRIlTCehPBmCLijLSLCtjJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nlAwPcCRIlTCehPBmCLijLSLCtjJ;
}
constexpr int32_t const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_nlAwPcCRIlTCehPBmCLijLSLCtjJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nlAwPcCRIlTCehPBmCLijLSLCtjJ;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_nlAwPcCRIlTCehPBmCLijLSLCtjJ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nlAwPcCRIlTCehPBmCLijLSLCtjJ = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_pMzDggyVRKrzNwDZFiRABkJSxvnA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pMzDggyVRKrzNwDZFiRABkJSxvnA;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_pMzDggyVRKrzNwDZFiRABkJSxvnA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pMzDggyVRKrzNwDZFiRABkJSxvnA;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_pMzDggyVRKrzNwDZFiRABkJSxvnA(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pMzDggyVRKrzNwDZFiRABkJSxvnA = value;
}
constexpr int32_t& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_wvEdFLhDJSTvgdJGJBhGpkawxORC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wvEdFLhDJSTvgdJGJBhGpkawxORC;
}
constexpr int32_t const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_wvEdFLhDJSTvgdJGJBhGpkawxORC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wvEdFLhDJSTvgdJGJBhGpkawxORC;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_wvEdFLhDJSTvgdJGJBhGpkawxORC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wvEdFLhDJSTvgdJGJBhGpkawxORC = value;
}
constexpr ::Rewired::Keyboard*& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_BwdrXQlaHoKkGwkDQmtGPLKslhmE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BwdrXQlaHoKkGwkDQmtGPLKslhmE;
}
constexpr ::Rewired::Keyboard* const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_BwdrXQlaHoKkGwkDQmtGPLKslhmE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BwdrXQlaHoKkGwkDQmtGPLKslhmE;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_BwdrXQlaHoKkGwkDQmtGPLKslhmE(::Rewired::Keyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BwdrXQlaHoKkGwkDQmtGPLKslhmE = value;
}
constexpr int32_t& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_xUHjAMqGARqhUytHqVkavFAeKThN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xUHjAMqGARqhUytHqVkavFAeKThN;
}
constexpr int32_t const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_xUHjAMqGARqhUytHqVkavFAeKThN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xUHjAMqGARqhUytHqVkavFAeKThN;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_xUHjAMqGARqhUytHqVkavFAeKThN(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xUHjAMqGARqhUytHqVkavFAeKThN = value;
}
constexpr int32_t& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_IvEVejcfaGiFKFAMATsNpxkYQTGQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IvEVejcfaGiFKFAMATsNpxkYQTGQ;
}
constexpr int32_t const& Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_get_IvEVejcfaGiFKFAMATsNpxkYQTGQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IvEVejcfaGiFKFAMATsNpxkYQTGQ;
}
constexpr void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::__cordl_internal_set_IvEVejcfaGiFKFAMATsNpxkYQTGQ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IvEVejcfaGiFKFAMATsNpxkYQTGQ = value;
}
inline void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline void Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki::Keyboard_egzZyOOngliCQNQoyFbUZkKzzvki()   {
}
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)(int32_t)>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1819271b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181859c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181859c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181927440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::*)()>(&::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181927440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_pkXAbQbYOIepObCYQsUKBCiGUJWlB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pkXAbQbYOIepObCYQsUKBCiGUJWlB;
}
constexpr int32_t const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_pkXAbQbYOIepObCYQsUKBCiGUJWlB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pkXAbQbYOIepObCYQsUKBCiGUJWlB;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_pkXAbQbYOIepObCYQsUKBCiGUJWlB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pkXAbQbYOIepObCYQsUKBCiGUJWlB = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_epHMcxMbDoEaiFoEryasZXYvnPYe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epHMcxMbDoEaiFoEryasZXYvnPYe;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_epHMcxMbDoEaiFoEryasZXYvnPYe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epHMcxMbDoEaiFoEryasZXYvnPYe;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_epHMcxMbDoEaiFoEryasZXYvnPYe(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epHMcxMbDoEaiFoEryasZXYvnPYe = value;
}
constexpr int32_t& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_RGUIEJBnSAUXTUEBQOlybMlhPhfB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RGUIEJBnSAUXTUEBQOlybMlhPhfB;
}
constexpr int32_t const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_RGUIEJBnSAUXTUEBQOlybMlhPhfB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RGUIEJBnSAUXTUEBQOlybMlhPhfB;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_RGUIEJBnSAUXTUEBQOlybMlhPhfB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RGUIEJBnSAUXTUEBQOlybMlhPhfB = value;
}
constexpr ::Rewired::Keyboard*& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_lCFmANCwkGwiqcqZDiPuLseemHJP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lCFmANCwkGwiqcqZDiPuLseemHJP;
}
constexpr ::Rewired::Keyboard* const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_lCFmANCwkGwiqcqZDiPuLseemHJP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lCFmANCwkGwiqcqZDiPuLseemHJP;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_lCFmANCwkGwiqcqZDiPuLseemHJP(::Rewired::Keyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lCFmANCwkGwiqcqZDiPuLseemHJP = value;
}
constexpr int32_t& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_OotvUrfSeAFWemvoWLSGjTmgUvqV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OotvUrfSeAFWemvoWLSGjTmgUvqV;
}
constexpr int32_t const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_OotvUrfSeAFWemvoWLSGjTmgUvqV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OotvUrfSeAFWemvoWLSGjTmgUvqV;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_OotvUrfSeAFWemvoWLSGjTmgUvqV(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OotvUrfSeAFWemvoWLSGjTmgUvqV = value;
}
constexpr int32_t& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_NATgprtlgurrxYzZDrIDDYLBThdt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NATgprtlgurrxYzZDrIDDYLBThdt;
}
constexpr int32_t const& Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_get_NATgprtlgurrxYzZDrIDDYLBThdt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NATgprtlgurrxYzZDrIDDYLBThdt;
}
constexpr void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::__cordl_internal_set_NATgprtlgurrxYzZDrIDDYLBThdt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NATgprtlgurrxYzZDrIDDYLBThdt = value;
}
inline void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline void Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA::Keyboard_XIKHlfTbcwlktEocCanUHYxnRennA()   {
}
//  Writing Method size for method: ::Rewired::Keyboard.VoekEtsfdJwXZNNXOihzxRmbLMk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::KeyboardKeyCode> (*)()>(&::Rewired::Keyboard::VoekEtsfdJwXZNNXOihzxRmbLMk)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819202e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"VoekEtsfdJwXZNNXOihzxRmbLMk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.vldabiOVqcMXmHAaFmscNLxHgCQi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::vldabiOVqcMXmHAaFmscNLxHgCQi)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1819217c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"vldabiOVqcMXmHAaFmscNLxHgCQi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.XwImOTLansFrXKUcApqoXkRdejRe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::XwImOTLansFrXKUcApqoXkRdejRe)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181920400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"XwImOTLansFrXKUcApqoXkRdejRe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(::StringW, ::Rewired::Interfaces::IUnifiedKeyboardSource*)>(&::Rewired::Keyboard::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1819208b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(int32_t, ::Rewired::InputSource, ::StringW, ::StringW, ::Rewired::HardwareControllerMap_Game*, int32_t, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::Keyboard::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181920ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181920fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyUp", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode, float_t)>(&::Rewired::Keyboard::GetKeyDoublePressHold)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18191e440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressHold", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyDoublePressHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyDoublePressHold)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18191e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressHold", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode, float_t)>(&::Rewired::Keyboard::GetKeyDoublePressDown)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18191e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyDoublePressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyDoublePressDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyPrev)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyPrev", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyTimePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyTimePressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyTimePressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyTimeUnpressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyTimeUnpressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyTimeUnpressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18191f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKey", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyDown)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18191ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyDown", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyUp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18191f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyUp", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyPrev)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18191ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyPrev", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyTimePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyTimePressed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18191ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyTimePressed", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyTimeUnpressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyTimeUnpressed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18191ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyTimeUnpressed", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyCodeByButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::Rewired::Keyboard::*)(int32_t)>(&::Rewired::Keyboard::GetKeyCodeByButtonIndex)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18191df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyCodeByButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyCodeById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::Rewired::Keyboard::*)(int32_t)>(&::Rewired::Keyboard::GetKeyCodeById)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18191e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyCodeById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetButtonIndexByKeyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetButtonIndexByKeyCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18191ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetButtonIndexByKeyCode", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetElementIdentifierByKeyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetElementIdentifierByKeyCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18191dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetElementIdentifierByKeyCode", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForFirstKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForFirstKey)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18191fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForFirstKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForAllKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForAllKeys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForAllKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForAllKeysDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForAllKeysDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForAllKeysDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForFirstKeyDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForFirstKeyDown)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18191faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForFirstKeyDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForFirstButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForFirstButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18191fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForFirstButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForFirstButtonDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18191fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForAllButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForAllButtons)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PollForAllButtonsDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::PollForAllButtonsDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.IsModifierKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::IsModifierKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18191f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"IsModifierKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.UdulFHrPifItuEODRnUmXrhHoqfO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::UdulFHrPifItuEODRnUmXrhHoqfO)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18191f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"UdulFHrPifItuEODRnUmXrhHoqfO", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.KeyCodeToModifierKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKey (*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::KeyCodeToModifierKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18191f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"KeyCodeToModifierKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.KeyCodeToModifierKeyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::KeyCodeToModifierKeyFlags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18191f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"KeyCodeToModifierKeyFlags", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsContain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ModifierKeyFlags, ::Rewired::ModifierKey)>(&::Rewired::Keyboard::ModifierKeyFlagsContain)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191f540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsContain", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsContain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ModifierKeyFlags, ::UnityEngine::KeyCode)>(&::Rewired::Keyboard::ModifierKeyFlagsContain)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18191f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsContain", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsToModifierKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKey (*)(::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::ModifierKeyFlagsToModifierKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18191f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToModifierKey", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsToKeyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (*)(::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::ModifierKeyFlagsToKeyCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18191f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToKeyCode", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyToModifierKeyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::ModifierKeyToModifierKeyFlags)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18191f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyToModifierKeyFlags", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::GetKeyName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18191e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyName", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::GetKeyName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18191e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyName", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18191ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyName", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ModifierKey, bool)>(&::Rewired::Keyboard::GetModifierKeyName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18191ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyName", {}, {::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ModifierKeyFlags, bool)>(&::Rewired::Keyboard::ModifierKeyFlagsToString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18191f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToString", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ModifierKeyFlagsToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::ModifierKeyFlagsToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18191f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToString", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetModifierKeyGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::GetModifierKeyGlyph)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18191ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyGlyph", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.YFrsXBtTVbOlDAwSfTPKWzrQVced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::YFrsXBtTVbOlDAwSfTPKWzrQVced)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181920680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"YFrsXBtTVbOlDAwSfTPKWzrQVced", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ObSCzYffQxantKhCzQZpcSHSExiSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::KeyboardKeyCode (*)(::UnityEngine::KeyCode)>(&::Rewired::Keyboard::ObSCzYffQxantKhCzQZpcSHSExiSA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ObSCzYffQxantKhCzQZpcSHSExiSA", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ARXdZpeRrVRgvpxXfKKvOgLwwwU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::ARXdZpeRrVRgvpxXfKKvOgLwwwU)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ARXdZpeRrVRgvpxXfKKvOgLwwwU", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ZrtbCvFuuAboJMBwuZGSMsLeIqoeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ModifierKeyFlags (*)(::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::ZrtbCvFuuAboJMBwuZGSMsLeIqoeb)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181920850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ZrtbCvFuuAboJMBwuZGSMsLeIqoeb", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.bJWMDcysSbPTrUNlnrwuXEXiTZsb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::bJWMDcysSbPTrUNlnrwuXEXiTZsb)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181920db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"bJWMDcysSbPTrUNlnrwuXEXiTZsb", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetKeyboardKeyCodeByButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::KeyboardKeyCode (*)(int32_t)>(&::Rewired::Keyboard::GetKeyboardKeyCodeByButtonIndex)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18191eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyboardKeyCodeByButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PMzGmYGDDoapfMKQLLaURYNhkONSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::PMzGmYGDDoapfMKQLLaURYNhkONSA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18191f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PMzGmYGDDoapfMKQLLaURYNhkONSA", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ClhPyohPsojxasWjrRPARERctcJb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<::UnityEngine::KeyCode>)>(&::Rewired::Keyboard::ClhPyohPsojxasWjrRPARERctcJb)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18191d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ClhPyohPsojxasWjrRPARERctcJb", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::KeyCode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.kGVDVVeRQbYRgqfaNyittVooecae
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(::Rewired::UpdateLoopType)>(&::Rewired::Keyboard::kGVDVVeRQbYRgqfaNyittVooecae)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181921150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.FhFSPaAVUjbisTxWHOPHMbXWMUxM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(::Rewired::UpdateLoopType)>(&::Rewired::Keyboard::FhFSPaAVUjbisTxWHOPHMbXWMUxM)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18191db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"FhFSPaAVUjbisTxWHOPHMbXWMUxM", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.gmHLefDchiOoqYugwAfjxvBplDdf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::gmHLefDchiOoqYugwAfjxvBplDdf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181921040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"gmHLefDchiOoqYugwAfjxvBplDdf", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.PNHCOADcaRSJbDFPVHjEmmcQOAJIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::PNHCOADcaRSJbDFPVHjEmmcQOAJIA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18191f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PNHCOADcaRSJbDFPVHjEmmcQOAJIA", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.cKdeUtgqwOGUplINVaYnuzKxeZor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::KeyboardKeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::cKdeUtgqwOGUplINVaYnuzKxeZor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181920df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"cKdeUtgqwOGUplINVaYnuzKxeZor", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.ESbTZMCHYaDLQZtxwRcTcLUKdtdv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::Rewired::KeyboardKeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::Keyboard::ESbTZMCHYaDLQZtxwRcTcLUKdtdv)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18191da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ESbTZMCHYaDLQZtxwRcTcLUKdtdv", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.GetButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Keyboard::*)(::Rewired::KeyboardKeyCode)>(&::Rewired::Keyboard::GetButtonIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18191de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.BakeMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(::Rewired::ControllerMap*)>(&::Rewired::Keyboard::BakeMap)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18191d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.BakeActionElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)(::Rewired::ControllerMap*, ::Rewired::ActionElementMap*)>(&::Rewired::Keyboard::BakeActionElementMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18191d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.XMvhLuSfxDjNiLrVFNHtTURkdGps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::XMvhLuSfxDjNiLrVFNHtTURkdGps)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819203e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.IThawtPqHUhdMerAfaSKCTaPAdOe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(bool)>(&::Rewired::Keyboard::IThawtPqHUhdMerAfaSKCTaPAdOe)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18191f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Keyboard*>(),
                    {::i2c::class_of<::Rewired::Keyboard*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.xEUbXDaAqOQlJbnikgDqLpToPyFkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Keyboard::*)(::by_ref<::Rewired::Controller_Button*>, ::by_ref<::Rewired::Controller_Button*>, ::Rewired::ModifierKey)>(&::Rewired::Keyboard::xEUbXDaAqOQlJbnikgDqLpToPyFkA)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181921a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"xEUbXDaAqOQlJbnikgDqLpToPyFkA", {}, {::i2c::type_of<::by_ref<::Rewired::Controller_Button*>>(), ::i2c::type_of<::by_ref<::Rewired::Controller_Button*>>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.oqrBsxQFQdBhDrDTAEzITgcZBNhJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::oqrBsxQFQdBhDrDTAEzITgcZBNhJA)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1819211b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"oqrBsxQFQdBhDrDTAEzITgcZBNhJA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.sjDStGotOTCttyUYJazBDsvbgRNl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Keyboard::*)(::Rewired::ModifierKey, bool)>(&::Rewired::Keyboard::sjDStGotOTCttyUYJazBDsvbgRNl)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1819214e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"sjDStGotOTCttyUYJazBDsvbgRNl", {}, {::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.RjmumSnhsdpCDbnLvjsrIUSIDgBKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*, ::StringW, ::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::by_ref<::StringW>)>(&::Rewired::Keyboard::RjmumSnhsdpCDbnLvjsrIUSIDgBKA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181920260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"RjmumSnhsdpCDbnLvjsrIUSIDgBKA", {}, {::i2c::type_of<::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.AIUOmUHjhvehTlbFvZDLJAOEWiCR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::AIUOmUHjhvehTlbFvZDLJAOEWiCR)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18191d510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"AIUOmUHjhvehTlbFvZDLJAOEWiCR", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.IDZyosIJIVGfBhtFFvVaBuGfWcZqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Keyboard::*)(::Rewired::ModifierKey)>(&::Rewired::Keyboard::IDZyosIJIVGfBhtFFvVaBuGfWcZqA)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18191f200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"IDZyosIJIVGfBhtFFvVaBuGfWcZqA", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.rUIeHdRpToYaezFOeFfCZFPdovRB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*, ::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::by_ref<::System::Object*>)>(&::Rewired::Keyboard::rUIeHdRpToYaezFOeFfCZFPdovRB)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181921470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"rUIeHdRpToYaezFOeFfCZFPdovRB", {}, {::i2c::type_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.jracUMALzmsSZkecSvyOLBtnUNIQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*, ::StringW, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::by_ref<::StringW>)>(&::Rewired::Keyboard::jracUMALzmsSZkecSvyOLBtnUNIQA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819210a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"jracUMALzmsSZkecSvyOLBtnUNIQA", {}, {::i2c::type_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.RPGvdZVwnHieXpdPEnNDFCwWJHLx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::RPGvdZVwnHieXpdPEnNDFCwWJHLx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181920060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"RPGvdZVwnHieXpdPEnNDFCwWJHLx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Keyboard.QcvigjyMEblDihoeKwaLYfblpMge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Keyboard::*)()>(&::Rewired::Keyboard::QcvigjyMEblDihoeKwaLYfblpMge)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18191fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"QcvigjyMEblDihoeKwaLYfblpMge", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource*& Rewired::Keyboard::__cordl_internal_get_YEGEyzsTRNaKeJGecBjGsAmRhRpv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YEGEyzsTRNaKeJGecBjGsAmRhRpv;
}
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* const& Rewired::Keyboard::__cordl_internal_get_YEGEyzsTRNaKeJGecBjGsAmRhRpv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YEGEyzsTRNaKeJGecBjGsAmRhRpv;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_YEGEyzsTRNaKeJGecBjGsAmRhRpv(::Rewired::Interfaces::IUnifiedKeyboardSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YEGEyzsTRNaKeJGecBjGsAmRhRpv = value;
}
constexpr ::Rewired::ModifierKeyFlags& Rewired::Keyboard::__cordl_internal_get_AxSfZGEuNIEhzOeURMyurxJVSMCn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxSfZGEuNIEhzOeURMyurxJVSMCn;
}
constexpr ::Rewired::ModifierKeyFlags const& Rewired::Keyboard::__cordl_internal_get_AxSfZGEuNIEhzOeURMyurxJVSMCn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxSfZGEuNIEhzOeURMyurxJVSMCn;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_AxSfZGEuNIEhzOeURMyurxJVSMCn(::Rewired::ModifierKeyFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AxSfZGEuNIEhzOeURMyurxJVSMCn = value;
}
constexpr ::Rewired::ModifierKeyFlags& Rewired::Keyboard::__cordl_internal_get_tGYbRouQNyNmheVNLghyaAPYujct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tGYbRouQNyNmheVNLghyaAPYujct;
}
constexpr ::Rewired::ModifierKeyFlags const& Rewired::Keyboard::__cordl_internal_get_tGYbRouQNyNmheVNLghyaAPYujct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tGYbRouQNyNmheVNLghyaAPYujct;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_tGYbRouQNyNmheVNLghyaAPYujct(::Rewired::ModifierKeyFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tGYbRouQNyNmheVNLghyaAPYujct = value;
}
constexpr ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*& Rewired::Keyboard::__cordl_internal_get_HemGXeUPJhJvwebpUVvlkaIlMUDm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HemGXeUPJhJvwebpUVvlkaIlMUDm;
}
constexpr ::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>* const& Rewired::Keyboard::__cordl_internal_get_HemGXeUPJhJvwebpUVvlkaIlMUDm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HemGXeUPJhJvwebpUVvlkaIlMUDm;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_HemGXeUPJhJvwebpUVvlkaIlMUDm(::System::Func_2<::Rewired::KeyboardKeyCode,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HemGXeUPJhJvwebpUVvlkaIlMUDm = value;
}
constexpr ::ArrayW<int32_t>& Rewired::Keyboard::__cordl_internal_get_EVEEJdWjHiSRUyBfkbVUxuAAyXMS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EVEEJdWjHiSRUyBfkbVUxuAAyXMS;
}
constexpr ::ArrayW<int32_t> const& Rewired::Keyboard::__cordl_internal_get_EVEEJdWjHiSRUyBfkbVUxuAAyXMS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EVEEJdWjHiSRUyBfkbVUxuAAyXMS;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_EVEEJdWjHiSRUyBfkbVUxuAAyXMS(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EVEEJdWjHiSRUyBfkbVUxuAAyXMS = value;
}
constexpr int32_t& Rewired::Keyboard::__cordl_internal_get_cfcILFBaTWXVAjugnkQktuFHFwbxA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cfcILFBaTWXVAjugnkQktuFHFwbxA;
}
constexpr int32_t const& Rewired::Keyboard::__cordl_internal_get_cfcILFBaTWXVAjugnkQktuFHFwbxA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cfcILFBaTWXVAjugnkQktuFHFwbxA;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_cfcILFBaTWXVAjugnkQktuFHFwbxA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cfcILFBaTWXVAjugnkQktuFHFwbxA = value;
}
constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*& Rewired::Keyboard::__cordl_internal_get_XGkJhGBboJWaVLEgzJuNtrywneeB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XGkJhGBboJWaVLEgzJuNtrywneeB;
}
constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc* const& Rewired::Keyboard::__cordl_internal_get_XGkJhGBboJWaVLEgzJuNtrywneeB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XGkJhGBboJWaVLEgzJuNtrywneeB;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_XGkJhGBboJWaVLEgzJuNtrywneeB(::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XGkJhGBboJWaVLEgzJuNtrywneeB = value;
}
constexpr ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*& Rewired::Keyboard::__cordl_internal_get_LFcVLrSjiOFsayMgroaDuurtLPUs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFcVLrSjiOFsayMgroaDuurtLPUs;
}
constexpr ::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu* const& Rewired::Keyboard::__cordl_internal_get_LFcVLrSjiOFsayMgroaDuurtLPUs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFcVLrSjiOFsayMgroaDuurtLPUs;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_LFcVLrSjiOFsayMgroaDuurtLPUs(::GlobalNamespace::uArTaRyygpuxWdJDbqGWbDpuXIZu*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LFcVLrSjiOFsayMgroaDuurtLPUs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*& Rewired::Keyboard::__cordl_internal_get_WHZImEqkUQqwcDGhsAZKcsLbBtUg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WHZImEqkUQqwcDGhsAZKcsLbBtUg;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>* const& Rewired::Keyboard::__cordl_internal_get_WHZImEqkUQqwcDGhsAZKcsLbBtUg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WHZImEqkUQqwcDGhsAZKcsLbBtUg;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_WHZImEqkUQqwcDGhsAZKcsLbBtUg(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WHZImEqkUQqwcDGhsAZKcsLbBtUg = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*& Rewired::Keyboard::__cordl_internal_get_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WWvEEtTTCUwbNEYgXFmYmgrfdVfJ;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>* const& Rewired::Keyboard::__cordl_internal_get_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WWvEEtTTCUwbNEYgXFmYmgrfdVfJ;
}
constexpr void Rewired::Keyboard::__cordl_internal_set_WWvEEtTTCUwbNEYgXFmYmgrfdVfJ(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WWvEEtTTCUwbNEYgXFmYmgrfdVfJ = value;
}
inline void Rewired::Keyboard::setStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk(::Rewired::Keyboard*  value)  {
::cordl_internals::setStaticField<::Rewired::Keyboard*, "PCbFuhTTkgmYJeJelRAKSSNPINxk", ::Rewired::Keyboard*>(std::forward<::Rewired::Keyboard*>(value));
}
inline ::Rewired::Keyboard* Rewired::Keyboard::getStaticF_PCbFuhTTkgmYJeJelRAKSSNPINxk()  {
return ::cordl_internals::getStaticField<::Rewired::Keyboard*, "PCbFuhTTkgmYJeJelRAKSSNPINxk", ::Rewired::Keyboard*>();
}
inline void Rewired::Keyboard::setStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ(::ArrayW<::Rewired::KeyboardKeyCode>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::KeyboardKeyCode>, "euQrwvBXUBNwfydWyTGhphadWQoQ", ::Rewired::Keyboard*>(std::forward<::ArrayW<::Rewired::KeyboardKeyCode>>(value));
}
inline ::ArrayW<::Rewired::KeyboardKeyCode> Rewired::Keyboard::getStaticF_euQrwvBXUBNwfydWyTGhphadWQoQ()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::KeyboardKeyCode>, "euQrwvBXUBNwfydWyTGhphadWQoQ", ::Rewired::Keyboard*>();
}
inline void Rewired::Keyboard::setStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "LJFkLhamLTxHSpdizTxThsvLiKvT", ::Rewired::Keyboard*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Keyboard::getStaticF_LJFkLhamLTxHSpdizTxThsvLiKvT()  {
return ::cordl_internals::getStaticField<::System::Guid, "LJFkLhamLTxHSpdizTxThsvLiKvT", ::Rewired::Keyboard*>();
}
inline ::ArrayW<::Rewired::KeyboardKeyCode> Rewired::Keyboard::VoekEtsfdJwXZNNXOihzxRmbLMk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"VoekEtsfdJwXZNNXOihzxRmbLMk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::KeyboardKeyCode>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>* Rewired::Keyboard::vldabiOVqcMXmHAaFmscNLxHgCQi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"vldabiOVqcMXmHAaFmscNLxHgCQi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_eewhiYlfclwnjWRFojkzSTQkkwmA*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>* Rewired::Keyboard::XwImOTLansFrXKUcApqoXkRdejRe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"XwImOTLansFrXKUcApqoXkRdejRe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>*>(this, ___internal_method);
}
inline void Rewired::Keyboard::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Keyboard::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline ::System::Guid Rewired::Keyboard::get_deviceInstanceGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool Rewired::Keyboard::GetKey(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetKeyDown(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetKeyUp(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyUp", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetKeyDoublePressHold(::UnityEngine::KeyCode  keyCode, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressHold", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode, speed);
}
inline bool Rewired::Keyboard::GetKeyDoublePressHold(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressHold", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetKeyDoublePressDown(::UnityEngine::KeyCode  keyCode, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode, speed);
}
inline bool Rewired::Keyboard::GetKeyDoublePressDown(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyDoublePressDown", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetKeyPrev(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyPrev", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline double_t Rewired::Keyboard::GetKeyTimePressed(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyTimePressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, keyCode);
}
inline double_t Rewired::Keyboard::GetKeyTimeUnpressed(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyTimeUnpressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, keyCode);
}
inline bool Rewired::Keyboard::GetModifierKey(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKey", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Rewired::Keyboard::GetModifierKeyDown(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyDown", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Rewired::Keyboard::GetModifierKeyUp(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyUp", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Rewired::Keyboard::GetModifierKeyPrev(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyPrev", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline double_t Rewired::Keyboard::GetModifierKeyTimePressed(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyTimePressed", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, key);
}
inline double_t Rewired::Keyboard::GetModifierKeyTimeUnpressed(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyTimeUnpressed", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, key);
}
inline ::UnityEngine::KeyCode Rewired::Keyboard::GetKeyCodeByButtonIndex(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyCodeByButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method, buttonIndex);
}
inline ::UnityEngine::KeyCode Rewired::Keyboard::GetKeyCodeById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyCodeById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method, elementIdentifierId);
}
inline int32_t Rewired::Keyboard::GetButtonIndexByKeyCode(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetButtonIndexByKeyCode", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, keyCode);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::Keyboard::GetElementIdentifierByKeyCode(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetElementIdentifierByKeyCode", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method, keyCode);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard::PollForFirstKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForFirstKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard::PollForAllKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForAllKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard::PollForAllKeysDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForAllKeysDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard::PollForFirstKeyDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PollForFirstKeyDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard::PollForFirstButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::Keyboard::PollForFirstButtonDown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard::PollForAllButtons()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::Keyboard::PollForAllButtonsDown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline bool Rewired::Keyboard::IsModifierKey(::UnityEngine::KeyCode  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"IsModifierKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool Rewired::Keyboard::UdulFHrPifItuEODRnUmXrhHoqfO(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"UdulFHrPifItuEODRnUmXrhHoqfO", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ModifierKey Rewired::Keyboard::KeyCodeToModifierKey(::UnityEngine::KeyCode  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"KeyCodeToModifierKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKey>(nullptr, ___internal_method, key);
}
inline ::Rewired::ModifierKeyFlags Rewired::Keyboard::KeyCodeToModifierKeyFlags(::UnityEngine::KeyCode  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"KeyCodeToModifierKeyFlags", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(nullptr, ___internal_method, key);
}
inline bool Rewired::Keyboard::ModifierKeyFlagsContain(::Rewired::ModifierKeyFlags  flags, ::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsContain", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, key);
}
inline bool Rewired::Keyboard::ModifierKeyFlagsContain(::Rewired::ModifierKeyFlags  flags, ::UnityEngine::KeyCode  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsContain", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, key);
}
inline ::Rewired::ModifierKey Rewired::Keyboard::ModifierKeyFlagsToModifierKey(::Rewired::ModifierKeyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToModifierKey", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKey>(nullptr, ___internal_method, flags);
}
inline ::UnityEngine::KeyCode Rewired::Keyboard::ModifierKeyFlagsToKeyCode(::Rewired::ModifierKeyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToKeyCode", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(nullptr, ___internal_method, flags);
}
inline ::Rewired::ModifierKeyFlags Rewired::Keyboard::ModifierKeyToModifierKeyFlags(::Rewired::ModifierKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyToModifierKeyFlags", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(nullptr, ___internal_method, key);
}
inline ::StringW Rewired::Keyboard::GetKeyName(::UnityEngine::KeyCode  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyName", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline ::StringW Rewired::Keyboard::GetKeyName(::UnityEngine::KeyCode  key, ::Rewired::ModifierKeyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyName", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, flags);
}
inline ::StringW Rewired::Keyboard::GetModifierKeyName(::Rewired::ModifierKey  modifierKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyName", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, modifierKey);
}
inline ::StringW Rewired::Keyboard::GetModifierKeyName(::Rewired::ModifierKey  modifierKey, bool  getShortName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyName", {}, {::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, modifierKey, getShortName);
}
inline ::StringW Rewired::Keyboard::ModifierKeyFlagsToString(::Rewired::ModifierKeyFlags  flags, bool  getShortName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToString", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags, getShortName);
}
inline ::StringW Rewired::Keyboard::ModifierKeyFlagsToString(::Rewired::ModifierKeyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ModifierKeyFlagsToString", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags);
}
inline ::System::Object* Rewired::Keyboard::GetModifierKeyGlyph(::Rewired::ModifierKey  modifierKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetModifierKeyGlyph", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, modifierKey);
}
inline ::StringW Rewired::Keyboard::YFrsXBtTVbOlDAwSfTPKWzrQVced(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"YFrsXBtTVbOlDAwSfTPKWzrQVced", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::KeyboardKeyCode Rewired::Keyboard::ObSCzYffQxantKhCzQZpcSHSExiSA(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ObSCzYffQxantKhCzQZpcSHSExiSA", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::KeyboardKeyCode>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::KeyCode Rewired::Keyboard::ARXdZpeRrVRgvpxXfKKvOgLwwwU(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ARXdZpeRrVRgvpxXfKKvOgLwwwU", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ModifierKeyFlags Rewired::Keyboard::ZrtbCvFuuAboJMBwuZGSMsLeIqoeb(::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ZrtbCvFuuAboJMBwuZGSMsLeIqoeb", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ModifierKeyFlags>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::Keyboard::bJWMDcysSbPTrUNlnrwuXEXiTZsb(::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"bJWMDcysSbPTrUNlnrwuXEXiTZsb", {}, {::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::KeyboardKeyCode Rewired::Keyboard::GetKeyboardKeyCodeByButtonIndex(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetKeyboardKeyCodeByButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::KeyboardKeyCode>(nullptr, ___internal_method, buttonIndex);
}
inline int32_t Rewired::Keyboard::PMzGmYGDDoapfMKQLLaURYNhkONSA(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PMzGmYGDDoapfMKQLLaURYNhkONSA", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Keyboard::ClhPyohPsojxasWjrRPARERctcJb(::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace, ::by_ref<::UnityEngine::KeyCode>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ClhPyohPsojxasWjrRPARERctcJb", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::KeyCode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Keyboard::kGVDVVeRQbYRgqfaNyittVooecae(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Keyboard::FhFSPaAVUjbisTxWHOPHMbXWMUxM(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"FhFSPaAVUjbisTxWHOPHMbXWMUxM", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Keyboard::gmHLefDchiOoqYugwAfjxvBplDdf(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"gmHLefDchiOoqYugwAfjxvBplDdf", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Keyboard::PNHCOADcaRSJbDFPVHjEmmcQOAJIA(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"PNHCOADcaRSJbDFPVHjEmmcQOAJIA", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Keyboard::cKdeUtgqwOGUplINVaYnuzKxeZor(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"cKdeUtgqwOGUplINVaYnuzKxeZor", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::Keyboard::ESbTZMCHYaDLQZtxwRcTcLUKdtdv(::Rewired::KeyboardKeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"ESbTZMCHYaDLQZtxwRcTcLUKdtdv", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::Keyboard::GetButtonIndex(::Rewired::KeyboardKeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"GetButtonIndex", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, keyCode);
}
inline void Rewired::Keyboard::BakeMap(::Rewired::ControllerMap*  controllerMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerMap);
}
inline void Rewired::Keyboard::BakeActionElementMap(::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  map)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerMap, map);
}
inline void Rewired::Keyboard::XMvhLuSfxDjNiLrVFNHtTURkdGps()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Keyboard::IThawtPqHUhdMerAfaSKCTaPAdOe(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Keyboard*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Keyboard::xEUbXDaAqOQlJbnikgDqLpToPyFkA(::by_ref<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"xEUbXDaAqOQlJbnikgDqLpToPyFkA", {}, {::i2c::type_of<::by_ref<::Rewired::Controller_Button*>>(), ::i2c::type_of<::by_ref<::Rewired::Controller_Button*>>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Keyboard::oqrBsxQFQdBhDrDTAEzITgcZBNhJA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"oqrBsxQFQdBhDrDTAEzITgcZBNhJA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Rewired::Keyboard::sjDStGotOTCttyUYJazBDsvbgRNl(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"sjDStGotOTCttyUYJazBDsvbgRNl", {}, {::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::Keyboard::RjmumSnhsdpCDbnLvjsrIUSIDgBKA(::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"RjmumSnhsdpCDbnLvjsrIUSIDgBKA", {}, {::i2c::type_of<::Rewired::Keyboard_sofOAjmnIBdUjPuzeCUVcqDxWewiA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline ::System::Object* Rewired::Keyboard::AIUOmUHjhvehTlbFvZDLJAOEWiCR(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"AIUOmUHjhvehTlbFvZDLJAOEWiCR", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Keyboard::IDZyosIJIVGfBhtFFvVaBuGfWcZqA(::Rewired::ModifierKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"IDZyosIJIVGfBhtFFvVaBuGfWcZqA", {}, {::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Keyboard::rUIeHdRpToYaezFOeFfCZFPdovRB(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"rUIeHdRpToYaezFOeFfCZFPdovRB", {}, {::i2c::type_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::Keyboard::jracUMALzmsSZkecSvyOLBtnUNIQA(::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"jracUMALzmsSZkecSvyOLBtnUNIQA", {}, {::i2c::type_of<::Rewired::Keyboard_PFnhNPpwZVfAuwJXKbMAhYmgApvdA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::Keyboard::RPGvdZVwnHieXpdPEnNDFCwWJHLx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"RPGvdZVwnHieXpdPEnNDFCwWJHLx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Keyboard::QcvigjyMEblDihoeKwaLYfblpMge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Keyboard*>(),
                        {"QcvigjyMEblDihoeKwaLYfblpMge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Keyboard* Rewired::Keyboard::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
inline ::Rewired::Keyboard* Rewired::Keyboard::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_7)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Keyboard*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7));
}
// Ctor Parameters []
constexpr ::Rewired::Keyboard::Keyboard()   {
}
