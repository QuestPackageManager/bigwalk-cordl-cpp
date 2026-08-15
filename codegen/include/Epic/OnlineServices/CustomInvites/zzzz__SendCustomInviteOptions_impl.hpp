#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendCustomInviteOptions.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions.get_TargetUserIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::ProductUserId*> (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::*)()>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::get_TargetUserIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"get_TargetUserIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions.set_TargetUserIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::*)(::ArrayW<::Epic::OnlineServices::ProductUserId*>)>(&::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::set_TargetUserIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"set_TargetUserIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::get_TargetUserIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"get_TargetUserIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::ProductUserId*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::set_TargetUserIds(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>(),
                        {"set_TargetUserIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TargetUserIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::SendCustomInviteOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _TargetUserIds_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_TargetUserIds_k__BackingField = _TargetUserIds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions::SendCustomInviteOptions()   {
}
