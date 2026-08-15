#pragma once
// IWYU pragma private; include "Animancer/ExposedPropertyTable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/zzzz__ExposedPropertyTable_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::Animancer::ExposedPropertyTable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExposedPropertyTable::*)()>(&::Animancer::ExposedPropertyTable::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18030c870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ExposedPropertyTable*>(),
                    {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExposedPropertyTable.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExposedPropertyTable::*)()>(&::Animancer::ExposedPropertyTable::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ExposedPropertyTable*>(),
                    {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExposedPropertyTable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExposedPropertyTable::*)()>(&::Animancer::ExposedPropertyTable::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ExposedPropertyTable*>(),
                    {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExposedPropertyTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExposedPropertyTable::*)()>(&::Animancer::ExposedPropertyTable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExposedPropertyTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::ExposedPropertyTable::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::ExposedPropertyTable::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::ExposedPropertyTable::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& Animancer::ExposedPropertyTable::__cordl_internal_get__Director()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Director;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& Animancer::ExposedPropertyTable::__cordl_internal_get__Director() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Director;
}
constexpr void Animancer::ExposedPropertyTable::__cordl_internal_set__Director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Director = value;
}
inline void Animancer::ExposedPropertyTable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ExposedPropertyTable::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ExposedPropertyTable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ExposedPropertyTable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ExposedPropertyTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExposedPropertyTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ExposedPropertyTable* Animancer::ExposedPropertyTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ExposedPropertyTable*>());
}
// Ctor Parameters []
constexpr ::Animancer::ExposedPropertyTable::ExposedPropertyTable()   {
}
