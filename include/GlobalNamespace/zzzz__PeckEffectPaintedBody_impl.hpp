#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPaintedBody.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPaintedBody_def.hpp"
#include "GlobalNamespace/zzzz__PaintedBody_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPaintedBody.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPaintedBody::*)()>(&::GlobalNamespace::PeckEffectPaintedBody::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPaintedBody.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPaintedBody::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPaintedBody::OnPeck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18044a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPaintedBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPaintedBody::*)()>(&::GlobalNamespace::PeckEffectPaintedBody::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::GlobalNamespace::PeckPlayerReference& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_playerReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr ::GlobalNamespace::PeckPlayerReference const& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_playerReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr void GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PaintedBody>& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_targetBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBody;
}
constexpr ::UnityW<::GlobalNamespace::PaintedBody> const& GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_get_targetBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBody;
}
constexpr void GlobalNamespace::PeckEffectPaintedBody::__cordl_internal_set_targetBody(::UnityW<::GlobalNamespace::PaintedBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetBody = value;
}
inline void GlobalNamespace::PeckEffectPaintedBody::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPaintedBody::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPaintedBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPaintedBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPaintedBody* GlobalNamespace::PeckEffectPaintedBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPaintedBody*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPaintedBody::PeckEffectPaintedBody()   {
}
