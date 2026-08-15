#pragma once
// IWYU pragma private; include "Mirror/MultiplexTransport.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__MultiplexTransport_def.hpp"
#include "Mirror/zzzz__MultiplexTransport_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::MultiplexTransport___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport___c__DisplayClass22_0::*)()>(&::Mirror::MultiplexTransport___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport___c__DisplayClass22_0._AddServerCallbacks_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport___c__DisplayClass22_0::*)(int32_t)>(&::Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18158eb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport___c__DisplayClass22_0._AddServerCallbacks_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport___c__DisplayClass22_0::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18158ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport___c__DisplayClass22_0._AddServerCallbacks_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport___c__DisplayClass22_0::*)(int32_t, ::Mirror::TransportError, ::StringW)>(&::Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18158ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport___c__DisplayClass22_0._AddServerCallbacks_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport___c__DisplayClass22_0::*)(int32_t)>(&::Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__3)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18158ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_get_transportIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transportIndex;
}
constexpr int32_t const& Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_get_transportIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transportIndex;
}
constexpr void Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_set_transportIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transportIndex = value;
}
constexpr ::UnityW<::Mirror::MultiplexTransport>& Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Mirror::MultiplexTransport> const& Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::MultiplexTransport___c__DisplayClass22_0::__cordl_internal_set___4__this(::UnityW<::Mirror::MultiplexTransport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Mirror::MultiplexTransport___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__0(int32_t  originalConnectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalConnectionId);
}
inline void Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__1(int32_t  originalConnectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalConnectionId, data, channel);
}
inline void Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__2(int32_t  originalConnectionId, ::Mirror::TransportError  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalConnectionId, error, reason);
}
inline void Mirror::MultiplexTransport___c__DisplayClass22_0::_AddServerCallbacks_b__3(int32_t  originalConnectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport___c__DisplayClass22_0*>(),
                        {"<AddServerCallbacks>b__3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalConnectionId);
}
inline ::Mirror::MultiplexTransport___c__DisplayClass22_0* Mirror::MultiplexTransport___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::MultiplexTransport___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::MultiplexTransport___c__DisplayClass22_0::MultiplexTransport___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Mirror::MultiplexTransport.AddToLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::MultiplexTransport::*)(int32_t, int32_t)>(&::Mirror::MultiplexTransport::AddToLookup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181588890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"AddToLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.RemoveFromLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(int32_t, int32_t)>(&::Mirror::MultiplexTransport::RemoveFromLookup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181588f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"RemoveFromLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.OriginalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Mirror::MultiplexTransport::OriginalId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181588f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OriginalId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.MultiplexId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::MultiplexTransport::*)(int32_t, int32_t)>(&::Mirror::MultiplexTransport::MultiplexId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181588df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"MultiplexId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815889a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181588c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815890c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181588cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181589180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181588ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181588e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::Available)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181588920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(::StringW)>(&::Mirror::MultiplexTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181588b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(::System::Uri*)>(&::Mirror::MultiplexTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815889d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181588c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::MultiplexTransport::ClientSend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181588d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.AddServerCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::AddServerCallbacks)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181588700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"AddServerCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerUri)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815894a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181588fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::MultiplexTransport::*)(int32_t)>(&::Mirror::MultiplexTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181589120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(int32_t)>(&::Mirror::MultiplexTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181589060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::MultiplexTransport::ServerSend)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815891e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerStart)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181589270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ServerStop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181589440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::MultiplexTransport::*)(int32_t)>(&::Mirror::MultiplexTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181588d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::Shutdown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815894e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181589540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                    {::i2c::class_of<::Mirror::MultiplexTransport*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MultiplexTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MultiplexTransport::*)()>(&::Mirror::MultiplexTransport::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181589600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::Mirror::Transport>>& Mirror::MultiplexTransport::__cordl_internal_get_transports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transports;
}
constexpr ::ArrayW<::UnityW<::Mirror::Transport>> const& Mirror::MultiplexTransport::__cordl_internal_get_transports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transports;
}
constexpr void Mirror::MultiplexTransport::__cordl_internal_set_transports(::ArrayW<::UnityW<::Mirror::Transport>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transports = value;
}
constexpr ::UnityW<::Mirror::Transport>& Mirror::MultiplexTransport::__cordl_internal_get_available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr ::UnityW<::Mirror::Transport> const& Mirror::MultiplexTransport::__cordl_internal_get_available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr void Mirror::MultiplexTransport::__cordl_internal_set_available(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___available = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*& Mirror::MultiplexTransport::__cordl_internal_get_originalToMultiplexedId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalToMultiplexedId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>* const& Mirror::MultiplexTransport::__cordl_internal_get_originalToMultiplexedId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalToMultiplexedId;
}
constexpr void Mirror::MultiplexTransport::__cordl_internal_set_originalToMultiplexedId(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalToMultiplexedId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*& Mirror::MultiplexTransport::__cordl_internal_get_multiplexedToOriginalId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplexedToOriginalId;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>* const& Mirror::MultiplexTransport::__cordl_internal_get_multiplexedToOriginalId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplexedToOriginalId;
}
constexpr void Mirror::MultiplexTransport::__cordl_internal_set_multiplexedToOriginalId(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiplexedToOriginalId = value;
}
constexpr int32_t& Mirror::MultiplexTransport::__cordl_internal_get_nextMultiplexedId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMultiplexedId;
}
constexpr int32_t const& Mirror::MultiplexTransport::__cordl_internal_get_nextMultiplexedId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMultiplexedId;
}
constexpr void Mirror::MultiplexTransport::__cordl_internal_set_nextMultiplexedId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextMultiplexedId = value;
}
inline int32_t Mirror::MultiplexTransport::AddToLookup(int32_t  originalConnectionId, int32_t  transportIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"AddToLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalConnectionId, transportIndex);
}
inline void Mirror::MultiplexTransport::RemoveFromLookup(int32_t  originalConnectionId, int32_t  transportIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"RemoveFromLookup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalConnectionId, transportIndex);
}
inline void Mirror::MultiplexTransport::OriginalId(int32_t  multiplexId, ::by_ref<int32_t>  originalConnectionId, ::by_ref<int32_t>  transportIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OriginalId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplexId, originalConnectionId, transportIndex);
}
inline int32_t Mirror::MultiplexTransport::MultiplexId(int32_t  originalConnectionId, int32_t  transportIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"MultiplexId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalConnectionId, transportIndex);
}
inline void Mirror::MultiplexTransport::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::MultiplexTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Mirror::MultiplexTransport::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline bool Mirror::MultiplexTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::MultiplexTransport::AddServerCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {"AddServerCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* Mirror::MultiplexTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool Mirror::MultiplexTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Mirror::MultiplexTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::MultiplexTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::MultiplexTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::MultiplexTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::MultiplexTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline void Mirror::MultiplexTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::MultiplexTransport::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MultiplexTransport*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::MultiplexTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MultiplexTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::MultiplexTransport* Mirror::MultiplexTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::MultiplexTransport*>());
}
// Ctor Parameters []
constexpr ::Mirror::MultiplexTransport::MultiplexTransport()   {
}
