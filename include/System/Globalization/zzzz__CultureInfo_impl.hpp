#pragma once
// IWYU pragma private; include "System/Globalization/CultureInfo.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::CultureInfo_Data::CultureInfo_Data(int32_t  ansi, int32_t  ebcdic, int32_t  mac, int32_t  oem, bool  right_to_left, uint8_t  list_sep) noexcept  {
this->ansi = ansi;
this->ebcdic = ebcdic;
this->mac = mac;
this->oem = oem;
this->right_to_left = right_to_left;
this->list_sep = list_sep;
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureInfo_Data::CultureInfo_Data()   {
}
//  Writing Method size for method: ::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::*)(::StringW)>(&::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::Invoke(::StringW  language)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline ::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate* System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate::CultureInfo_OnCultureInfoChangedDelegate()   {
}
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__cultureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureData* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__cultureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__cultureData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__isInherited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__isInherited)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180f187e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__isInherited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_InvariantCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_InvariantCulture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816b3280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_InvariantCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CurrentCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b3070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CurrentCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CurrentUICulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b3090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CurrentUICulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructCurrentCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::ConstructCurrentCulture)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1816af900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructCurrentCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructCurrentUICulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::ConstructCurrentUICulture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816afac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructCurrentUICulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Territory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Territory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_Territory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_LCID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_LCID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Calendar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816b2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Parent)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1816b3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_TextInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TextInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_TextInfo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1816b35f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::Clone)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1816af740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)(::System::Object*)>(&::System::Globalization::CultureInfo::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816b1df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::CultureInfo*> (*)(::System::Globalization::CultureTypes)>(&::System::Globalization::CultureInfo::GetCultures)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1816b22b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultures", {}, {::i2c::type_of<::System::Globalization::CultureTypes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetTextInfoData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo_Data (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::GetTextInfoData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetTextInfoData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816b2630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CompareInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816b2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_IsNeutralCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_IsNeutralCulture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816b32c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CheckNeutral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::CheckNeutral)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CheckNeutral", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_NumberFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::NumberFormatInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_NumberFormat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816b3300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.set_NumberFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::CultureInfo::set_NumberFormat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816b3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DateTimeFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_DateTimeFormat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816b30b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.set_DateTimeFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(&::System::Globalization::CultureInfo::set_DateTimeFormat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816b3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_EnglishName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_EnglishName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816b3240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Globalization::CultureInfo::*)(::System::Type*)>(&::System::Globalization::CultureInfo::GetFormat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816b2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                    {::i2c::class_of<::System::Globalization::CultureInfo*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::Construct)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816afe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"Construct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.construct_internal_locale_from_lcid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)(int32_t)>(&::System::Globalization::CultureInfo::construct_internal_locale_from_lcid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816b2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"construct_internal_locale_from_lcid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.construct_internal_locale_from_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::construct_internal_locale_from_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816b2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"construct_internal_locale_from_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_current_locale_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Globalization::CultureInfo::get_current_locale_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816b3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_current_locale_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.internal_get_cultures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::CultureInfo*> (*)(bool, bool, bool)>(&::System::Globalization::CultureInfo::internal_get_cultures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816b3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"internal_get_cultures", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(bool)>(&::System::Globalization::CultureInfo::ConstructInvariant)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1816afad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructInvariant", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateTextInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TextInfo* (::System::Globalization::CultureInfo::*)(bool)>(&::System::Globalization::CultureInfo::CreateTextInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816b1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateTextInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t, bool, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1816b2a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW, bool, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1816b2800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.insert_into_shared_tables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CultureInfo::insert_into_shared_tables)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1816b3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"insert_into_shared_tables", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(int32_t)>(&::System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1816b1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1816b20c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW, bool)>(&::System::Globalization::CultureInfo::CreateCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816affb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateCulture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateSpecificCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateSpecificCulture)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1816b1b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateSpecificCulture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructLocaleFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::ConstructLocaleFromName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816afdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructLocaleFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateSpecificCultureFromNeutral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral)> {
  constexpr static std::size_t size = 0x1ac0;
  constexpr static std::size_t addrs = 0x1816b0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateSpecificCultureFromNeutral", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CalendarType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_CalendarType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816b2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CalendarType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateCalendar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)(int32_t)>(&::System::Globalization::CultureInfo::CreateCalendar)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1816afe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateCalendar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateNotFoundException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateNotFoundException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816b0010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateNotFoundException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DefaultThreadCurrentCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816b31c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_DefaultThreadCurrentCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DefaultThreadCurrentUICulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816b3200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_DefaultThreadCurrentUICulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_SortName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_SortName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_SortName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_UserDefaultUICulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_UserDefaultUICulture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816afac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_UserDefaultUICulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_UserDefaultCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_UserDefaultCulture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816afac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_UserDefaultCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.InitializeUserPreferredCultureInfoInAppX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*)>(&::System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816b2660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"InitializeUserPreferredCultureInfoInAppX", {}, {::i2c::type_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.OnCultureInfoChangedInAppX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Globalization::CultureInfo::OnCultureInfoChangedInAppX)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816b2680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"OnCultureInfoChangedInAppX", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfoForUserPreferredLanguageInAppX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816b1e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfoForUserPreferredLanguageInAppX", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Globalization::CultureInfo::__cordl_internal_get_m_isReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isReadOnly;
}
constexpr bool const& System::Globalization::CultureInfo::__cordl_internal_get_m_isReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isReadOnly;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_isReadOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isReadOnly = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_cultureID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cultureID;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_cultureID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cultureID;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_cultureID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cultureID = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_parent_lcid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent_lcid;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_parent_lcid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent_lcid;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_parent_lcid(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent_lcid = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_datetime_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datetime_index;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_datetime_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datetime_index;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_datetime_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___datetime_index = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_number_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___number_index;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_number_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___number_index;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_number_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___number_index = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_default_calendar_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___default_calendar_type;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_default_calendar_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___default_calendar_type;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_default_calendar_type(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___default_calendar_type = value;
}
constexpr bool& System::Globalization::CultureInfo::__cordl_internal_get_m_useUserOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useUserOverride;
}
constexpr bool const& System::Globalization::CultureInfo::__cordl_internal_get_m_useUserOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useUserOverride;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_useUserOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useUserOverride = value;
}
constexpr ::System::Globalization::NumberFormatInfo*& System::Globalization::CultureInfo::__cordl_internal_get_numInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numInfo;
}
constexpr ::System::Globalization::NumberFormatInfo* const& System::Globalization::CultureInfo::__cordl_internal_get_numInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numInfo;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_numInfo(::System::Globalization::NumberFormatInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numInfo = value;
}
constexpr ::System::Globalization::DateTimeFormatInfo*& System::Globalization::CultureInfo::__cordl_internal_get_dateTimeInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeInfo;
}
constexpr ::System::Globalization::DateTimeFormatInfo* const& System::Globalization::CultureInfo::__cordl_internal_get_dateTimeInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeInfo;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_dateTimeInfo(::System::Globalization::DateTimeFormatInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTimeInfo = value;
}
constexpr ::System::Globalization::TextInfo*& System::Globalization::CultureInfo::__cordl_internal_get_textInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInfo;
}
constexpr ::System::Globalization::TextInfo* const& System::Globalization::CultureInfo::__cordl_internal_get_textInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInfo;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_textInfo(::System::Globalization::TextInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textInfo = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_m_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_name;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_m_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_name;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_name = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_englishname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___englishname;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_englishname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___englishname;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_englishname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___englishname = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_nativename()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativename;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_nativename() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativename;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_nativename(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativename = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_iso3lang()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iso3lang;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_iso3lang() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iso3lang;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_iso3lang(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iso3lang = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_iso2lang()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iso2lang;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_iso2lang() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iso2lang;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_iso2lang(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iso2lang = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_win3lang()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___win3lang;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_win3lang() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___win3lang;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_win3lang(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___win3lang = value;
}
constexpr ::StringW& System::Globalization::CultureInfo::__cordl_internal_get_territory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___territory;
}
constexpr ::StringW const& System::Globalization::CultureInfo::__cordl_internal_get_territory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___territory;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_territory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___territory = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CultureInfo::__cordl_internal_get_native_calendar_names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___native_calendar_names;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CultureInfo::__cordl_internal_get_native_calendar_names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___native_calendar_names;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_native_calendar_names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___native_calendar_names = value;
}
constexpr ::System::Globalization::CompareInfo*& System::Globalization::CultureInfo::__cordl_internal_get_compareInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compareInfo;
}
constexpr ::System::Globalization::CompareInfo* const& System::Globalization::CultureInfo::__cordl_internal_get_compareInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compareInfo;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_compareInfo(::System::Globalization::CompareInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compareInfo = value;
}
constexpr void*& System::Globalization::CultureInfo::__cordl_internal_get_textinfo_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textinfo_data;
}
constexpr void* const& System::Globalization::CultureInfo::__cordl_internal_get_textinfo_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textinfo_data;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_textinfo_data(void*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textinfo_data = value;
}
constexpr int32_t& System::Globalization::CultureInfo::__cordl_internal_get_m_dataItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_dataItem;
}
constexpr int32_t const& System::Globalization::CultureInfo::__cordl_internal_get_m_dataItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_dataItem;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_dataItem(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_dataItem = value;
}
constexpr ::System::Globalization::Calendar*& System::Globalization::CultureInfo::__cordl_internal_get_calendar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendar;
}
constexpr ::System::Globalization::Calendar* const& System::Globalization::CultureInfo::__cordl_internal_get_calendar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendar;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_calendar(::System::Globalization::Calendar*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calendar = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Globalization::CultureInfo::__cordl_internal_get_parent_culture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent_culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Globalization::CultureInfo::__cordl_internal_get_parent_culture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent_culture;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_parent_culture(::System::Globalization::CultureInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent_culture = value;
}
constexpr bool& System::Globalization::CultureInfo::__cordl_internal_get_constructed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constructed;
}
constexpr bool const& System::Globalization::CultureInfo::__cordl_internal_get_constructed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constructed;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_constructed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constructed = value;
}
constexpr ::ArrayW<uint8_t>& System::Globalization::CultureInfo::__cordl_internal_get_cached_serialized_form()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached_serialized_form;
}
constexpr ::ArrayW<uint8_t> const& System::Globalization::CultureInfo::__cordl_internal_get_cached_serialized_form() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached_serialized_form;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_cached_serialized_form(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cached_serialized_form = value;
}
constexpr ::System::Globalization::CultureData*& System::Globalization::CultureInfo::__cordl_internal_get_m_cultureData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cultureData;
}
constexpr ::System::Globalization::CultureData* const& System::Globalization::CultureInfo::__cordl_internal_get_m_cultureData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cultureData;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_cultureData(::System::Globalization::CultureData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cultureData = value;
}
constexpr bool& System::Globalization::CultureInfo::__cordl_internal_get_m_isInherited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isInherited;
}
constexpr bool const& System::Globalization::CultureInfo::__cordl_internal_get_m_isInherited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isInherited;
}
constexpr void System::Globalization::CultureInfo::__cordl_internal_set_m_isInherited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isInherited = value;
}
inline void System::Globalization::CultureInfo::setStaticF_invariant_culture_info(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "invariant_culture_info", ::System::Globalization::CultureInfo*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_invariant_culture_info()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "invariant_culture_info", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_table_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "shared_table_lock", ::System::Globalization::CultureInfo*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Globalization::CultureInfo::getStaticF_shared_table_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "shared_table_lock", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_default_current_culture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "default_current_culture", ::System::Globalization::CultureInfo*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_default_current_culture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "default_current_culture", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_s_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentUICulture", ::System::Globalization::CultureInfo*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_DefaultThreadCurrentUICulture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentUICulture", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_s_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentCulture", ::System::Globalization::CultureInfo*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_DefaultThreadCurrentCulture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentCulture", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_by_number(::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*, "shared_by_number", ::System::Globalization::CultureInfo*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>* System::Globalization::CultureInfo::getStaticF_shared_by_number()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*, "shared_by_number", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_by_name(::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*, "shared_by_name", ::System::Globalization::CultureInfo*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>* System::Globalization::CultureInfo::getStaticF_shared_by_name()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*, "shared_by_name", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_s_UserPreferredCultureInfoInAppX(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_UserPreferredCultureInfoInAppX", ::System::Globalization::CultureInfo*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_UserPreferredCultureInfoInAppX()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_UserPreferredCultureInfoInAppX", ::System::Globalization::CultureInfo*>();
}
inline void System::Globalization::CultureInfo::setStaticF_IsTaiwanSku(bool  value)  {
::cordl_internals::setStaticField<bool, "IsTaiwanSku", ::System::Globalization::CultureInfo*>(std::forward<bool>(value));
}
inline bool System::Globalization::CultureInfo::getStaticF_IsTaiwanSku()  {
return ::cordl_internals::getStaticField<bool, "IsTaiwanSku", ::System::Globalization::CultureInfo*>();
}
inline ::System::Globalization::CultureData* System::Globalization::CultureInfo::get__cultureData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__cultureData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*>(this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::get__isInherited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__isInherited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_InvariantCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_InvariantCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_CurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CurrentCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_CurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CurrentUICulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::ConstructCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructCurrentCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::ConstructCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructCurrentUICulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_Territory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_Territory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get__name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get__name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureInfo::get_LCID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::CultureInfo::get_Calendar()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_Parent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline ::System::Globalization::TextInfo* System::Globalization::CultureInfo::get_TextInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TextInfo*>(this, ___internal_method);
}
inline ::System::Object* System::Globalization::CultureInfo::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Globalization::CultureInfo*> System::Globalization::CultureInfo::GetCultures(::System::Globalization::CultureTypes  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultures", {}, {::i2c::type_of<::System::Globalization::CultureTypes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CultureInfo*>>(nullptr, ___internal_method, types);
}
inline ::System::Globalization::CultureInfo_Data System::Globalization::CultureInfo::GetTextInfoData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetTextInfoData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo_Data>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CultureInfo::get_CompareInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*>(this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::get_IsNeutralCulture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Globalization::CultureInfo::CheckNeutral()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CheckNeutral", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::NumberFormatInfo* System::Globalization::CultureInfo::get_NumberFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::NumberFormatInfo*>(this, ___internal_method);
}
inline void System::Globalization::CultureInfo::set_NumberFormat(::System::Globalization::NumberFormatInfo*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::CultureInfo::get_DateTimeFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(this, ___internal_method);
}
inline void System::Globalization::CultureInfo::set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Globalization::CultureInfo::get_EnglishName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Globalization::CultureInfo::GetFormat(::System::Type*  formatType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::CultureInfo*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formatType);
}
inline void System::Globalization::CultureInfo::Construct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"Construct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::construct_internal_locale_from_lcid(int32_t  lcid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"construct_internal_locale_from_lcid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lcid);
}
inline bool System::Globalization::CultureInfo::construct_internal_locale_from_name(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"construct_internal_locale_from_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::StringW System::Globalization::CultureInfo::get_current_locale_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_current_locale_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Globalization::CultureInfo*> System::Globalization::CultureInfo::internal_get_cultures(bool  neutral, bool  specific, bool  installed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"internal_get_cultures", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CultureInfo*>>(nullptr, ___internal_method, neutral, specific, installed);
}
inline void System::Globalization::CultureInfo::ConstructInvariant(bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructInvariant", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, read_only);
}
inline ::System::Globalization::TextInfo* System::Globalization::CultureInfo::CreateTextInfo(bool  readOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateTextInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TextInfo*>(this, ___internal_method, readOnly);
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture, bool  useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture, useUserOverride);
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture, bool  useUserOverride, bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture, useUserOverride, read_only);
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name, bool  useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, useUserOverride);
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name, bool  useUserOverride, bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, useUserOverride, read_only);
}
inline void System::Globalization::CultureInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::CultureInfo::insert_into_shared_tables(::System::Globalization::CultureInfo*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"insert_into_shared_tables", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfo(int32_t  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, culture);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfo(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateCulture(::StringW  name, bool  reference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateCulture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, name, reference);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateSpecificCulture(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateSpecificCulture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, name);
}
inline bool System::Globalization::CultureInfo::ConstructLocaleFromName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"ConstructLocaleFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateSpecificCultureFromNeutral", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, name);
}
inline int32_t System::Globalization::CultureInfo::get_CalendarType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_CalendarType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::CultureInfo::CreateCalendar(int32_t  calendarType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateCalendar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method, calendarType);
}
inline ::System::Exception* System::Globalization::CultureInfo::CreateNotFoundException(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"CreateNotFoundException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_DefaultThreadCurrentCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_DefaultThreadCurrentUICulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_SortName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_SortName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_UserDefaultUICulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_UserDefaultUICulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_UserDefaultCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"get_UserDefaultCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline void System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX(::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*  onCultureInfoChangedInAppX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"InitializeUserPreferredCultureInfoInAppX", {}, {::i2c::type_of<::System::Globalization::CultureInfo_OnCultureInfoChangedDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onCultureInfoChangedInAppX);
}
inline void System::Globalization::CultureInfo::OnCultureInfoChangedInAppX(::StringW  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"OnCultureInfoChangedInAppX", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, language);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureInfo*>(),
                        {"GetCultureInfoForUserPreferredLanguageInAppX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(culture));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture, bool  useUserOverride)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(culture, useUserOverride));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture, bool  useUserOverride, bool  read_only)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(culture, useUserOverride, read_only));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(name));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name, bool  useUserOverride)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(name, useUserOverride));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name, bool  useUserOverride, bool  read_only)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>(name, useUserOverride, read_only));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureInfo*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Globalization::CultureInfo::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Globalization::CultureInfo::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IFormatProvider"
constexpr  System::Globalization::CultureInfo::operator ::System::IFormatProvider*() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* System::Globalization::CultureInfo::i___System__IFormatProvider() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureInfo::CultureInfo()   {
}
