#pragma once
// IWYU pragma private; include "Mirror/ThrottledTransport.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "Mirror/zzzz__ThrottledTransport_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::ThrottledTransport.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::Awake)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18158d1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.IsReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::IsReliable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18158d540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"IsReliable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::StringW)>(&::Mirror::ThrottledTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::System::Uri*)>(&::Mirror::ThrottledTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::ClientSend)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerStart)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerStop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815886d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerUri)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::ServerSend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815885f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815885c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::Available)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.GetBatchThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::GetBatchThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::Shutdown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                    {::i2c::class_of<::Mirror::ThrottledTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::_Awake_b__2_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802fc2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(::Mirror::TransportError, ::StringW)>(&::Mirror::ThrottledTransport::_Awake_b__2_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_3", {}, {::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)()>(&::Mirror::ThrottledTransport::_Awake_b__2_4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_5)> {
  constexpr static std::size_t size = 0x90b0;
  constexpr static std::size_t addrs = 0x180f0f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_6)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_7)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_7", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t, ::Mirror::TransportError, ::StringW)>(&::Mirror::ThrottledTransport::_Awake_b__2_8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_8", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ThrottledTransport._Awake_b__2_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ThrottledTransport::*)(int32_t)>(&::Mirror::ThrottledTransport::_Awake_b__2_9)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_9", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Transport>& Mirror::ThrottledTransport::__cordl_internal_get_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr ::UnityW<::Mirror::Transport> const& Mirror::ThrottledTransport::__cordl_internal_get_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr void Mirror::ThrottledTransport::__cordl_internal_set_inner(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inner = value;
}
constexpr bool& Mirror::ThrottledTransport::__cordl_internal_get_dropUnreliableTraffic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropUnreliableTraffic;
}
constexpr bool const& Mirror::ThrottledTransport::__cordl_internal_get_dropUnreliableTraffic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropUnreliableTraffic;
}
constexpr void Mirror::ThrottledTransport::__cordl_internal_set_dropUnreliableTraffic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropUnreliableTraffic = value;
}
inline void Mirror::ThrottledTransport::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::ThrottledTransport::IsReliable(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"IsReliable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, channelId);
}
inline bool Mirror::ThrottledTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Mirror::ThrottledTransport::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void Mirror::ThrottledTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::ThrottledTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::ThrottledTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* Mirror::ThrottledTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW Mirror::ThrottledTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::ThrottledTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::ThrottledTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::ThrottledTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::ThrottledTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Mirror::ThrottledTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline int32_t Mirror::ThrottledTransport::GetBatchThreshold(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline void Mirror::ThrottledTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::ThrottledTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_1(::System::ArraySegment_1<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ch);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_2(::System::ArraySegment_1<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ch);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_3(::Mirror::TransportError  error, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_3", {}, {::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, msg);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_5(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_6(int32_t  id, ::System::ArraySegment_1<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, data, ch);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_7(int32_t  id, ::System::ArraySegment_1<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_7", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, data, ch);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_8(int32_t  id, ::Mirror::TransportError  error, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_8", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, error, msg);
}
inline void Mirror::ThrottledTransport::_Awake_b__2_9(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ThrottledTransport*>(),
                        {"<Awake>b__2_9", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Mirror::ThrottledTransport* Mirror::ThrottledTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ThrottledTransport*>());
}
// Ctor Parameters []
constexpr ::Mirror::ThrottledTransport::ThrottledTransport()   {
}
