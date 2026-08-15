#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPacketQueueSizeOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPacketQueueSizeOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions.get_IncomingPacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::*)()>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::get_IncomingPacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"get_IncomingPacketQueueMaxSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions.set_IncomingPacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::*)(uint64_t)>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::set_IncomingPacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"set_IncomingPacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions.get_OutgoingPacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::*)()>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::get_OutgoingPacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"get_OutgoingPacketQueueMaxSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions.set_OutgoingPacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::*)(uint64_t)>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::set_OutgoingPacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"set_OutgoingPacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::get_IncomingPacketQueueMaxSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"get_IncomingPacketQueueMaxSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::set_IncomingPacketQueueMaxSizeBytes(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"set_IncomingPacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::get_OutgoingPacketQueueMaxSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"get_OutgoingPacketQueueMaxSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::set_OutgoingPacketQueueMaxSizeBytes(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>(),
                        {"set_OutgoingPacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_IncomingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OutgoingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::SetPacketQueueSizeOptions(uint64_t  _IncomingPacketQueueMaxSizeBytes_k__BackingField, uint64_t  _OutgoingPacketQueueMaxSizeBytes_k__BackingField) noexcept  {
this->_IncomingPacketQueueMaxSizeBytes_k__BackingField = _IncomingPacketQueueMaxSizeBytes_k__BackingField;
this->_OutgoingPacketQueueMaxSizeBytes_k__BackingField = _OutgoingPacketQueueMaxSizeBytes_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions::SetPacketQueueSizeOptions()   {
}
