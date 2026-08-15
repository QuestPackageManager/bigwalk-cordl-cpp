#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/FinalizeInviteOptions.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__FinalizeInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.get_CustomInviteId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_CustomInviteId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_CustomInviteId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.set_CustomInviteId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_CustomInviteId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_CustomInviteId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.get_ProcessingResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_ProcessingResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_ProcessingResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions.set_ProcessingResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_ProcessingResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_ProcessingResult", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_CustomInviteId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_CustomInviteId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_CustomInviteId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_CustomInviteId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::get_ProcessingResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"get_ProcessingResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::set_ProcessingResult(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>(),
                        {"set_ProcessingResult", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CustomInviteId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProcessingResult_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::FinalizeInviteOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CustomInviteId_k__BackingField, ::Epic::OnlineServices::Result  _ProcessingResult_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_CustomInviteId_k__BackingField = _CustomInviteId_k__BackingField;
this->_ProcessingResult_k__BackingField = _ProcessingResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions::FinalizeInviteOptions()   {
}
