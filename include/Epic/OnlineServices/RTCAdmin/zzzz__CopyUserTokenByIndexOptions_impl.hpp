#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/CopyUserTokenByIndexOptions.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions.get_UserTokenIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::*)()>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::get_UserTokenIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"get_UserTokenIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions.set_UserTokenIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::set_UserTokenIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"set_UserTokenIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions.get_QueryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::*)()>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::get_QueryId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"get_QueryId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions.set_QueryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::set_QueryId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"set_QueryId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::get_UserTokenIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"get_UserTokenIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::set_UserTokenIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"set_UserTokenIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::get_QueryId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"get_QueryId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::set_QueryId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>(),
                        {"set_QueryId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UserTokenIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_QueryId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::CopyUserTokenByIndexOptions(uint32_t  _UserTokenIndex_k__BackingField, uint32_t  _QueryId_k__BackingField) noexcept  {
this->_UserTokenIndex_k__BackingField = _UserTokenIndex_k__BackingField;
this->_QueryId_k__BackingField = _QueryId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions::CopyUserTokenByIndexOptions()   {
}
