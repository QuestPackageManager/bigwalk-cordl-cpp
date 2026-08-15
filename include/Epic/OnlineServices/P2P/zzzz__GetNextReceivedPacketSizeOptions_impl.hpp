#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/GetNextReceivedPacketSizeOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__GetNextReceivedPacketSizeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::*)()>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions.get_RequestedChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint8_t> (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::*)()>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::get_RequestedChannel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18052e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"get_RequestedChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions.set_RequestedChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::*)(::System::Nullable_1<uint8_t>)>(&::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::set_RequestedChannel)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18052e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"set_RequestedChannel", {}, {::i2c::type_of<::System::Nullable_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<uint8_t> Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::get_RequestedChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"get_RequestedChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::set_RequestedChannel(::System::Nullable_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions>(),
                        {"set_RequestedChannel", {}, {::i2c::type_of<::System::Nullable_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_RequestedChannel", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::GetNextReceivedPacketSizeOptions(::ArrayW<uint8_t>  m_RequestedChannel, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->m_RequestedChannel = m_RequestedChannel;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions::GetNextReceivedPacketSizeOptions()   {
}
