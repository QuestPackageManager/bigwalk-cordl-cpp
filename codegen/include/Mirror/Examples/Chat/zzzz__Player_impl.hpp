#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/Player.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/Chat/zzzz__Player_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)()>(&::Mirror::Examples::Chat::Player::OnStartServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815610f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)()>(&::Mirror::Examples::Chat::Player::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181560f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)()>(&::Mirror::Examples::Chat::Player::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)()>(&::Mirror::Examples::Chat::Player::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.get_NetworkplayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::Examples::Chat::Player::*)()>(&::Mirror::Examples::Chat::Player::get_NetworkplayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"get_NetworkplayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.set_NetworkplayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)(::ByRefConst<::StringW>)>(&::Mirror::Examples::Chat::Player::set_NetworkplayerName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181526c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"set_NetworkplayerName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::Chat::Player::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815617d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Chat::Player.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Chat::Player::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::Chat::Player::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815609e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::Examples::Chat::Player::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::StringW const& Mirror::Examples::Chat::Player::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void Mirror::Examples::Chat::Player::__cordl_internal_set_playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
inline void Mirror::Examples::Chat::Player::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::Player::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::Player::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::Player::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::Examples::Chat::Player::get_NetworkplayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"get_NetworkplayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::Examples::Chat::Player::set_NetworkplayerName(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Chat::Player*>(),
                        {"set_NetworkplayerName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Chat::Player::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::Chat::Player::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Chat::Player*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::Chat::Player* Mirror::Examples::Chat::Player::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Chat::Player*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Chat::Player::Player()   {
}
