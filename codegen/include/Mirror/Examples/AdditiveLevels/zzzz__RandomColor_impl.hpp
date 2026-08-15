#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/RandomColor.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Mirror/Examples/AdditiveLevels/zzzz__RandomColor_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::Mirror::Examples::AdditiveLevels::RandomColor::SetColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181562970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)()>(&::Mirror::Examples::AdditiveLevels::RandomColor::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181562790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)()>(&::Mirror::Examples::AdditiveLevels::RandomColor::OnStartServer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18156b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)()>(&::Mirror::Examples::AdditiveLevels::RandomColor::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181562a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)()>(&::Mirror::Examples::AdditiveLevels::RandomColor::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.get_Networkcolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::Mirror::Examples::AdditiveLevels::RandomColor::*)()>(&::Mirror::Examples::AdditiveLevels::RandomColor::get_Networkcolor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"get_Networkcolor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.set_Networkcolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)(::ByRefConst<::UnityEngine::Color32>)>(&::Mirror::Examples::AdditiveLevels::RandomColor::set_Networkcolor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18156b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"set_Networkcolor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::AdditiveLevels::RandomColor::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181562920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::RandomColor.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::RandomColor::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::AdditiveLevels::RandomColor::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18156b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color32& Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color32 const& Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_set_color(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_get_cachedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_get_cachedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMaterial;
}
constexpr void Mirror::Examples::AdditiveLevels::RandomColor::__cordl_internal_set_cachedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedMaterial = value;
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::SetColor(::UnityEngine::Color32  _, ::UnityEngine::Color32  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newColor);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color32 Mirror::Examples::AdditiveLevels::RandomColor::get_Networkcolor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"get_Networkcolor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::set_Networkcolor(::ByRefConst<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(),
                        {"set_Networkcolor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::AdditiveLevels::RandomColor::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::RandomColor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::AdditiveLevels::RandomColor* Mirror::Examples::AdditiveLevels::RandomColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveLevels::RandomColor*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveLevels::RandomColor::RandomColor()   {
}
