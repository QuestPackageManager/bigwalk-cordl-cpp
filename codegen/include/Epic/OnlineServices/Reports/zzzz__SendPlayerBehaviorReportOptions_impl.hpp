#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/SendPlayerBehaviorReportOptions.hpp"
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_impl.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportOptions_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.get_ReporterUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_ReporterUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_ReporterUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.set_ReporterUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_ReporterUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_ReporterUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.get_ReportedUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_ReportedUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_ReportedUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.set_ReportedUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_ReportedUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_ReportedUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.get_Category
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Reports::PlayerReportsCategory (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Category)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Category", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.set_Category
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)(::Epic::OnlineServices::Reports::PlayerReportsCategory)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Category)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Category", {}, {::i2c::type_of<::Epic::OnlineServices::Reports::PlayerReportsCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Message)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Message)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Message", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Context)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions.set_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Context)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Context", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_ReporterUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_ReporterUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_ReporterUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_ReporterUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_ReportedUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_ReportedUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_ReportedUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_ReportedUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Reports::PlayerReportsCategory Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Category()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Category", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Reports::PlayerReportsCategory>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Category", {}, {::i2c::type_of<::Epic::OnlineServices::Reports::PlayerReportsCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Message(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Message", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::set_Context(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>(),
                        {"set_Context", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ReporterUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReportedUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Category_k__BackingField", ty: "::Epic::OnlineServices::Reports::PlayerReportsCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Message_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Context_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::SendPlayerBehaviorReportOptions(::Epic::OnlineServices::ProductUserId*  _ReporterUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ReportedUserId_k__BackingField, ::Epic::OnlineServices::Reports::PlayerReportsCategory  _Category_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Context_k__BackingField) noexcept  {
this->_ReporterUserId_k__BackingField = _ReporterUserId_k__BackingField;
this->_ReportedUserId_k__BackingField = _ReportedUserId_k__BackingField;
this->_Category_k__BackingField = _Category_k__BackingField;
this->_Message_k__BackingField = _Message_k__BackingField;
this->_Context_k__BackingField = _Context_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions::SendPlayerBehaviorReportOptions()   {
}
