#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreePrototypeSerializable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)()>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)(::UnityEngine::TreePrototype*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18144c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.GetPrototype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TreePrototype* (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)()>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::GetPrototype)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18144c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"GetPrototype", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::JBooth::MicroVerseCore::TreePrototypeSerializable*, ::JBooth::MicroVerseCore::TreePrototypeSerializable*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18144c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"op_Equality", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::JBooth::MicroVerseCore::TreePrototypeSerializable*, ::JBooth::MicroVerseCore::TreePrototypeSerializable*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18144c2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)(::System::Object*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18144bfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.IsEqualToTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)(::UnityEngine::TreePrototype*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::IsEqualToTree)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18144c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"IsEqualToTree", {}, {::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)()>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18144c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreePrototypeSerializable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreePrototypeSerializable::*)(::JBooth::MicroVerseCore::TreePrototypeSerializable*)>(&::JBooth::MicroVerseCore::TreePrototypeSerializable::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18144c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"Equals", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_bendFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendFactor;
}
constexpr float_t const& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_bendFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendFactor;
}
constexpr void JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_set_bendFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bendFactor = value;
}
constexpr int32_t& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_navMeshLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshLod;
}
constexpr int32_t const& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_navMeshLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navMeshLod;
}
constexpr void JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_set_navMeshLod(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navMeshLod = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void JBooth::MicroVerseCore::TreePrototypeSerializable::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
inline void JBooth::MicroVerseCore::TreePrototypeSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreePrototypeSerializable::_ctor(::UnityEngine::TreePrototype*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::UnityEngine::TreePrototype* JBooth::MicroVerseCore::TreePrototypeSerializable::GetPrototype()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"GetPrototype", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TreePrototype*>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreePrototypeSerializable::op_Equality(::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"op_Equality", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool JBooth::MicroVerseCore::TreePrototypeSerializable::op_Inequality(::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  obj2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline bool JBooth::MicroVerseCore::TreePrototypeSerializable::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool JBooth::MicroVerseCore::TreePrototypeSerializable::IsEqualToTree(::UnityEngine::TreePrototype*  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"IsEqualToTree", {}, {::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tree);
}
inline int32_t JBooth::MicroVerseCore::TreePrototypeSerializable::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreePrototypeSerializable::Equals(::JBooth::MicroVerseCore::TreePrototypeSerializable*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(),
                        {"Equals", {}, {::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::JBooth::MicroVerseCore::TreePrototypeSerializable* JBooth::MicroVerseCore::TreePrototypeSerializable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TreePrototypeSerializable*>());
}
inline ::JBooth::MicroVerseCore::TreePrototypeSerializable* JBooth::MicroVerseCore::TreePrototypeSerializable::New_ctor(::UnityEngine::TreePrototype*  p)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TreePrototypeSerializable*>(p));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TreePrototypeSerializable::TreePrototypeSerializable()   {
}
