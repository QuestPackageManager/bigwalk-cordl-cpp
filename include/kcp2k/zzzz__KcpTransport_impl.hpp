#pragma once
// IWYU pragma private; include "kcp2k/KcpTransport.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__KcpTransport_def.hpp"
#include "Mirror/zzzz__PortTransport_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "kcp2k/zzzz__ErrorCode_def.hpp"
#include "kcp2k/zzzz__KcpChannel_def.hpp"
#include "kcp2k/zzzz__KcpClient_def.hpp"
#include "kcp2k/zzzz__KcpConfig_def.hpp"
#include "kcp2k/zzzz__KcpServerConnection_def.hpp"
#include "kcp2k/zzzz__KcpServer_def.hpp"
#include "kcp2k/zzzz__KcpTransport_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpTransport___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport___c::*)()>(&::kcp2k::KcpTransport___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._Awake_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport___c::*)(::StringW)>(&::kcp2k::KcpTransport___c::_Awake_b__29_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<Awake>b__29_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetAverageMaxSendRate_b__51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetAverageMaxSendRate_b__51_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetAverageMaxSendRate>b__51_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetAverageMaxReceiveRate_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetAverageMaxReceiveRate_b__52_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetAverageMaxReceiveRate>b__52_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetTotalSendQueue_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetTotalSendQueue_b__53_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalSendQueue>b__53_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetTotalReceiveQueue_b__54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetTotalReceiveQueue_b__54_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalReceiveQueue>b__54_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetTotalSendBuffer_b__55_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetTotalSendBuffer_b__55_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalSendBuffer>b__55_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport___c._GetTotalReceiveBuffer_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport___c::*)(::kcp2k::KcpServerConnection)>(&::kcp2k::KcpTransport___c::_GetTotalReceiveBuffer_b__56_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalReceiveBuffer>b__56_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
    return ___internal_method;
  }
};
inline void kcp2k::KcpTransport___c::setStaticF___9(::kcp2k::KcpTransport___c*  value)  {
::cordl_internals::setStaticField<::kcp2k::KcpTransport___c*, "<>9", ::kcp2k::KcpTransport___c*>(std::forward<::kcp2k::KcpTransport___c*>(value));
}
inline ::kcp2k::KcpTransport___c* kcp2k::KcpTransport___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::kcp2k::KcpTransport___c*, "<>9", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__29_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__29_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* kcp2k::KcpTransport___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__29_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__51_0(::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*, "<>9__51_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>* kcp2k::KcpTransport___c::getStaticF___9__51_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*, "<>9__51_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__52_0(::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*, "<>9__52_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int64_t>* kcp2k::KcpTransport___c::getStaticF___9__52_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int64_t>*, "<>9__52_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__53_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__53_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* kcp2k::KcpTransport___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__53_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__54_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__54_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* kcp2k::KcpTransport___c::getStaticF___9__54_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__54_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__55_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__55_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* kcp2k::KcpTransport___c::getStaticF___9__55_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__55_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::setStaticF___9__56_0(::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__56_0", ::kcp2k::KcpTransport___c*>(std::forward<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*>(value));
}
inline ::System::Func_2<::kcp2k::KcpServerConnection,int32_t>* kcp2k::KcpTransport___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::kcp2k::KcpServerConnection,int32_t>*, "<>9__56_0", ::kcp2k::KcpTransport___c*>();
}
inline void kcp2k::KcpTransport___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport___c::_Awake_b__29_0(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<Awake>b__29_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline int64_t kcp2k::KcpTransport___c::_GetAverageMaxSendRate_b__51_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetAverageMaxSendRate>b__51_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, conn);
}
inline int64_t kcp2k::KcpTransport___c::_GetAverageMaxReceiveRate_b__52_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetAverageMaxReceiveRate>b__52_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, conn);
}
inline int32_t kcp2k::KcpTransport___c::_GetTotalSendQueue_b__53_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalSendQueue>b__53_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conn);
}
inline int32_t kcp2k::KcpTransport___c::_GetTotalReceiveQueue_b__54_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalReceiveQueue>b__54_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conn);
}
inline int32_t kcp2k::KcpTransport___c::_GetTotalSendBuffer_b__55_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalSendBuffer>b__55_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conn);
}
inline int32_t kcp2k::KcpTransport___c::_GetTotalReceiveBuffer_b__56_0(::kcp2k::KcpServerConnection  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport___c*>(),
                        {"<GetTotalReceiveBuffer>b__56_0", {}, {::i2c::type_of<::kcp2k::KcpServerConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conn);
}
inline ::kcp2k::KcpTransport___c* kcp2k::KcpTransport___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpTransport___c*>());
}
// Ctor Parameters []
constexpr ::kcp2k::KcpTransport___c::KcpTransport___c()   {
}
//  Writing Method size for method: ::kcp2k::KcpTransport.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::get_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(uint16_t)>(&::kcp2k::KcpTransport::set_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.FromKcpChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::kcp2k::KcpChannel)>(&::kcp2k::KcpTransport::FromKcpChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181586580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"FromKcpChannel", {}, {::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ToKcpChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::kcp2k::KcpChannel (*)(int32_t)>(&::kcp2k::KcpTransport::ToKcpChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181587fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"ToKcpChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ToTransportError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::TransportError (*)(::kcp2k::ErrorCode)>(&::kcp2k::KcpTransport::ToTransportError)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181587fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"ToTransportError", {}, {::i2c::type_of<::kcp2k::ErrorCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::Awake)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181585e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::OnValidate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181587b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::Available)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x180c3e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181586430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(::StringW)>(&::kcp2k::KcpTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181586400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(::System::Uri*)>(&::kcp2k::KcpTransport::ClientConnect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181586320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::kcp2k::KcpTransport::ClientSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181586500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181586450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181586480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815864d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerUri)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181587f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181587cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181587ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::kcp2k::KcpTransport::ServerSend)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181587e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181587cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181587d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerStop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181587f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181587d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181587e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::Shutdown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181586880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetBatchThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::GetBatchThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181586850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetAverageMaxSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetAverageMaxSendRate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815866f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetAverageMaxSendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetAverageMaxReceiveRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetAverageMaxReceiveRate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181586590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetAverageMaxReceiveRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetTotalSendQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetTotalSendQueue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181586ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalSendQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetTotalReceiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetTotalReceiveQueue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815869c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalReceiveQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetTotalSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetTotalSendBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181586ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalSendBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.GetTotalReceiveBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::GetTotalReceiveBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815868d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalReceiveBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.PrettyBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::kcp2k::KcpTransport::PrettyBytes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181587bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"PrettyBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.OnGUIStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::OnGUIStatistics)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0x181586c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.OnLogStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::OnLogStatistics)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x1815876c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181587fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpTransport*>(),
                    {::i2c::class_of<::kcp2k::KcpTransport*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815882a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::_Awake_b__29_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815880d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpTransport::_Awake_b__29_2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181588100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)()>(&::kcp2k::KcpTransport::_Awake_b__29_3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(::kcp2k::ErrorCode, ::StringW)>(&::kcp2k::KcpTransport::_Awake_b__29_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181588170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_4", {}, {::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::_Awake_b__29_5)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803085a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpTransport::_Awake_b__29_6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815881c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t)>(&::kcp2k::KcpTransport::_Awake_b__29_7)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpTransport._Awake_b__29_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpTransport::*)(int32_t, ::kcp2k::ErrorCode, ::StringW)>(&::kcp2k::KcpTransport::_Awake_b__29_8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181588240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_8", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& kcp2k::KcpTransport::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr uint16_t const& kcp2k::KcpTransport::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_port(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_DualMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DualMode;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_DualMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DualMode;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_DualMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DualMode = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_NoDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_NoDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_NoDelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoDelay = value;
}
constexpr uint32_t& kcp2k::KcpTransport::__cordl_internal_get_Interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr uint32_t const& kcp2k::KcpTransport::__cordl_internal_get_Interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_Interval(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interval = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_Timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_Timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_Timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timeout = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_RecvBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvBufferSize;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_RecvBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvBufferSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_RecvBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecvBufferSize = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_SendBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendBufferSize;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_SendBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendBufferSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_SendBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendBufferSize = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_FastResend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FastResend;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_FastResend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FastResend;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_FastResend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FastResend = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_CongestionWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CongestionWindow;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_CongestionWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CongestionWindow;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_CongestionWindow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CongestionWindow = value;
}
constexpr uint32_t& kcp2k::KcpTransport::__cordl_internal_get_ReceiveWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveWindowSize;
}
constexpr uint32_t const& kcp2k::KcpTransport::__cordl_internal_get_ReceiveWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveWindowSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_ReceiveWindowSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveWindowSize = value;
}
constexpr uint32_t& kcp2k::KcpTransport::__cordl_internal_get_SendWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr uint32_t const& kcp2k::KcpTransport::__cordl_internal_get_SendWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_SendWindowSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendWindowSize = value;
}
constexpr uint32_t& kcp2k::KcpTransport::__cordl_internal_get_MaxRetransmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRetransmit;
}
constexpr uint32_t const& kcp2k::KcpTransport::__cordl_internal_get_MaxRetransmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRetransmit;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_MaxRetransmit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRetransmit = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_MaximizeSocketBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaximizeSocketBuffers;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_MaximizeSocketBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaximizeSocketBuffers;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_MaximizeSocketBuffers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaximizeSocketBuffers = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_ReliableMaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableMaxMessageSize;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_ReliableMaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReliableMaxMessageSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_ReliableMaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReliableMaxMessageSize = value;
}
constexpr int32_t& kcp2k::KcpTransport::__cordl_internal_get_UnreliableMaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnreliableMaxMessageSize;
}
constexpr int32_t const& kcp2k::KcpTransport::__cordl_internal_get_UnreliableMaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnreliableMaxMessageSize;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_UnreliableMaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnreliableMaxMessageSize = value;
}
constexpr ::kcp2k::KcpConfig*& kcp2k::KcpTransport::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::kcp2k::KcpConfig* const& kcp2k::KcpTransport::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_config(::kcp2k::KcpConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::kcp2k::KcpServer*& kcp2k::KcpTransport::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::kcp2k::KcpServer* const& kcp2k::KcpTransport::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_server(::kcp2k::KcpServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___server = value;
}
constexpr ::kcp2k::KcpClient*& kcp2k::KcpTransport::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::kcp2k::KcpClient* const& kcp2k::KcpTransport::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_client(::kcp2k::KcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_debugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_debugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_debugLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLog = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_statisticsGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statisticsGUI;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_statisticsGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statisticsGUI;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_statisticsGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statisticsGUI = value;
}
constexpr bool& kcp2k::KcpTransport::__cordl_internal_get_statisticsLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statisticsLog;
}
constexpr bool const& kcp2k::KcpTransport::__cordl_internal_get_statisticsLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statisticsLog;
}
constexpr void kcp2k::KcpTransport::__cordl_internal_set_statisticsLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statisticsLog = value;
}
inline uint16_t kcp2k::KcpTransport::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::set_Port(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t kcp2k::KcpTransport::FromKcpChannel(::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"FromKcpChannel", {}, {::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channel);
}
inline ::kcp2k::KcpChannel kcp2k::KcpTransport::ToKcpChannel(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"ToKcpChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::kcp2k::KcpChannel>(nullptr, ___internal_method, channel);
}
inline ::Mirror::TransportError kcp2k::KcpTransport::ToTransportError(::kcp2k::ErrorCode  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"ToTransportError", {}, {::i2c::type_of<::kcp2k::ErrorCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::TransportError>(nullptr, ___internal_method, error);
}
inline void kcp2k::KcpTransport::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool kcp2k::KcpTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool kcp2k::KcpTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void kcp2k::KcpTransport::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void kcp2k::KcpTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void kcp2k::KcpTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* kcp2k::KcpTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool kcp2k::KcpTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void kcp2k::KcpTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::StringW kcp2k::KcpTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void kcp2k::KcpTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t kcp2k::KcpTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline int32_t kcp2k::KcpTransport::GetBatchThreshold(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline int64_t kcp2k::KcpTransport::GetAverageMaxSendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetAverageMaxSendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t kcp2k::KcpTransport::GetAverageMaxReceiveRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetAverageMaxReceiveRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t kcp2k::KcpTransport::GetTotalSendQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalSendQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t kcp2k::KcpTransport::GetTotalReceiveQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalReceiveQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t kcp2k::KcpTransport::GetTotalSendBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalSendBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t kcp2k::KcpTransport::GetTotalReceiveBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"GetTotalReceiveBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW kcp2k::KcpTransport::PrettyBytes(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"PrettyBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline void kcp2k::KcpTransport::OnGUIStatistics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::OnLogStatistics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW kcp2k::KcpTransport::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpTransport*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::_Awake_b__29_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::_Awake_b__29_2(::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, channel);
}
inline void kcp2k::KcpTransport::_Awake_b__29_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpTransport::_Awake_b__29_4(::kcp2k::ErrorCode  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_4", {}, {::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, reason);
}
inline void kcp2k::KcpTransport::_Awake_b__29_5(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_5", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void kcp2k::KcpTransport::_Awake_b__29_6(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, message, channel);
}
inline void kcp2k::KcpTransport::_Awake_b__29_7(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void kcp2k::KcpTransport::_Awake_b__29_8(int32_t  connectionId, ::kcp2k::ErrorCode  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpTransport*>(),
                        {"<Awake>b__29_8", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, error, reason);
}
inline ::kcp2k::KcpTransport* kcp2k::KcpTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpTransport*>());
}
/// @brief Convert operator to "::Mirror::PortTransport"
constexpr  kcp2k::KcpTransport::operator ::Mirror::PortTransport*() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::PortTransport"
constexpr ::Mirror::PortTransport* kcp2k::KcpTransport::i___Mirror__PortTransport() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::kcp2k::KcpTransport::KcpTransport()   {
}
