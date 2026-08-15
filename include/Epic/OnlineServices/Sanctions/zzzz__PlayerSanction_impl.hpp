#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/PlayerSanction.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__PlayerSanction_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.get_TimePlaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Epic::OnlineServices::Sanctions::PlayerSanction::*)()>(&::Epic::OnlineServices::Sanctions::PlayerSanction::get_TimePlaced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_TimePlaced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.set_TimePlaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::PlayerSanction::*)(int64_t)>(&::Epic::OnlineServices::Sanctions::PlayerSanction::set_TimePlaced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_TimePlaced", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.get_Action
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sanctions::PlayerSanction::*)()>(&::Epic::OnlineServices::Sanctions::PlayerSanction::get_Action)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_Action", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.set_Action
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::PlayerSanction::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sanctions::PlayerSanction::set_Action)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_Action", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.get_TimeExpires
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Epic::OnlineServices::Sanctions::PlayerSanction::*)()>(&::Epic::OnlineServices::Sanctions::PlayerSanction::get_TimeExpires)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_TimeExpires", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.set_TimeExpires
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::PlayerSanction::*)(int64_t)>(&::Epic::OnlineServices::Sanctions::PlayerSanction::set_TimeExpires)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_TimeExpires", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.get_ReferenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sanctions::PlayerSanction::*)()>(&::Epic::OnlineServices::Sanctions::PlayerSanction::get_ReferenceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_ReferenceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::PlayerSanction.set_ReferenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::PlayerSanction::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sanctions::PlayerSanction::set_ReferenceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_ReferenceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Epic::OnlineServices::Sanctions::PlayerSanction::get_TimePlaced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_TimePlaced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::PlayerSanction::set_TimePlaced(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_TimePlaced", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sanctions::PlayerSanction::get_Action()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_Action", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::PlayerSanction::set_Action(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_Action", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Epic::OnlineServices::Sanctions::PlayerSanction::get_TimeExpires()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_TimeExpires", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::PlayerSanction::set_TimeExpires(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_TimeExpires", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sanctions::PlayerSanction::get_ReferenceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"get_ReferenceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::PlayerSanction::set_ReferenceId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::PlayerSanction>(),
                        {"set_ReferenceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TimePlaced_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Action_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TimeExpires_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReferenceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::PlayerSanction::PlayerSanction(int64_t  _TimePlaced_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Action_k__BackingField, int64_t  _TimeExpires_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField) noexcept  {
this->_TimePlaced_k__BackingField = _TimePlaced_k__BackingField;
this->_Action_k__BackingField = _Action_k__BackingField;
this->_TimeExpires_k__BackingField = _TimeExpires_k__BackingField;
this->_ReferenceId_k__BackingField = _ReferenceId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::PlayerSanction::PlayerSanction()   {
}
