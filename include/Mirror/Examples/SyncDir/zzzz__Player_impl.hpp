#pragma once
// IWYU pragma private; include "Mirror/Examples/SyncDir/Player.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Mirror/Examples/SyncDir/zzzz__Player_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__SyncList_1_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815610b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815618d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181560c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181561cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.get_Networkhealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::SyncDir::Player::*)()>(&::Mirror::Examples::SyncDir::Player::get_Networkhealth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"get_Networkhealth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.set_Networkhealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::SyncDir::Player::set_Networkhealth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181562100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"set_Networkhealth", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::SyncDir::Player::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181561820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SyncDir::Player.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SyncDir::Player::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::SyncDir::Player::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181560660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextMesh>& Mirror::Examples::SyncDir::Player::__cordl_internal_get_textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMesh;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& Mirror::Examples::SyncDir::Player::__cordl_internal_get_textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMesh;
}
constexpr void Mirror::Examples::SyncDir::Player::__cordl_internal_set_textMesh(::UnityW<::UnityEngine::TextMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textMesh = value;
}
constexpr ::UnityEngine::Color& Mirror::Examples::SyncDir::Player::__cordl_internal_get_localColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localColor;
}
constexpr ::UnityEngine::Color const& Mirror::Examples::SyncDir::Player::__cordl_internal_get_localColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localColor;
}
constexpr void Mirror::Examples::SyncDir::Player::__cordl_internal_set_localColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localColor = value;
}
constexpr int32_t& Mirror::Examples::SyncDir::Player::__cordl_internal_get_health()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr int32_t const& Mirror::Examples::SyncDir::Player::__cordl_internal_get_health() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___health;
}
constexpr void Mirror::Examples::SyncDir::Player::__cordl_internal_set_health(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___health = value;
}
constexpr ::Mirror::SyncList_1<int32_t>*& Mirror::Examples::SyncDir::Player::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr ::Mirror::SyncList_1<int32_t>* const& Mirror::Examples::SyncDir::Player::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr void Mirror::Examples::SyncDir::Player::__cordl_internal_set_list(::Mirror::SyncList_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
inline void Mirror::Examples::SyncDir::Player::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SyncDir::Player::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SyncDir::Player::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SyncDir::Player::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SyncDir::Player::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::Examples::SyncDir::Player::get_Networkhealth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"get_Networkhealth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::SyncDir::Player::set_Networkhealth(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(),
                        {"set_Networkhealth", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::SyncDir::Player::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::SyncDir::Player::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::SyncDir::Player*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::SyncDir::Player* Mirror::Examples::SyncDir::Player::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::SyncDir::Player*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::SyncDir::Player::Player()   {
}
