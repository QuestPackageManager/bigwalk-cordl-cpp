#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingPacketQueueFullInfo.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(::System::Object*)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_PacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_PacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_PacketQueueMaxSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_PacketQueueMaxSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(uint64_t)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_PacketQueueMaxSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_PacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_PacketQueueCurrentSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_PacketQueueCurrentSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_PacketQueueCurrentSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_PacketQueueCurrentSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(uint64_t)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_PacketQueueCurrentSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_PacketQueueCurrentSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_OverflowPacketLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketLocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketLocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_OverflowPacketLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketLocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_OverflowPacketChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_OverflowPacketChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(uint8_t)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketChannel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.get_OverflowPacketSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.set_OverflowPacketSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)(uint32_t)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketSizeBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_PacketQueueMaxSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_PacketQueueMaxSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_PacketQueueMaxSizeBytes(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_PacketQueueMaxSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_PacketQueueCurrentSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_PacketQueueCurrentSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_PacketQueueCurrentSizeBytes(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_PacketQueueCurrentSizeBytes", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketLocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketLocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketLocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketChannel(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketChannel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::get_OverflowPacketSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"get_OverflowPacketSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::set_OverflowPacketSizeBytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"set_OverflowPacketSizeBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PacketQueueCurrentSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverflowPacketLocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverflowPacketChannel_k__BackingField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverflowPacketSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::OnIncomingPacketQueueFullInfo(::System::Object*  _ClientData_k__BackingField, uint64_t  _PacketQueueMaxSizeBytes_k__BackingField, uint64_t  _PacketQueueCurrentSizeBytes_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _OverflowPacketLocalUserId_k__BackingField, uint8_t  _OverflowPacketChannel_k__BackingField, uint32_t  _OverflowPacketSizeBytes_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_PacketQueueMaxSizeBytes_k__BackingField = _PacketQueueMaxSizeBytes_k__BackingField;
this->_PacketQueueCurrentSizeBytes_k__BackingField = _PacketQueueCurrentSizeBytes_k__BackingField;
this->_OverflowPacketLocalUserId_k__BackingField = _OverflowPacketLocalUserId_k__BackingField;
this->_OverflowPacketChannel_k__BackingField = _OverflowPacketChannel_k__BackingField;
this->_OverflowPacketSizeBytes_k__BackingField = _OverflowPacketSizeBytes_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo::OnIncomingPacketQueueFullInfo()   {
}
