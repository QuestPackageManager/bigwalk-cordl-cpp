#pragma once
// IWYU pragma private; include "Animancer/MixerTransition2D.hpp"
#include "Animancer/zzzz__MixerTransition_2_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/zzzz__MixerTransition2D_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__ManualMixerState_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "Animancer/zzzz__MixerTransition2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::MixerTransition2D_MixerType::MixerTransition2D_MixerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::MixerTransition2D_MixerType::MixerTransition2D_MixerType()   {
}
constexpr ::Animancer::MixerTransition2D_MixerType  Animancer::MixerTransition2D_MixerType::Cartesian{static_cast<int32_t>(0x0)};
constexpr ::Animancer::MixerTransition2D_MixerType  Animancer::MixerTransition2D_MixerType::Directional{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Animancer::MixerTransition2D.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Animancer::MixerTransition2D_MixerType> (::Animancer::MixerTransition2D::*)()>(&::Animancer::MixerTransition2D::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerTransition2D.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::MixerState_1<::UnityEngine::Vector2>* (::Animancer::MixerTransition2D::*)()>(&::Animancer::MixerTransition2D::CreateState)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180311bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                    {::i2c::class_of<::Animancer::MixerTransition2D*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerTransition2D.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerTransition2D::*)(::Animancer::MixerTransition2D*)>(&::Animancer::MixerTransition2D::CopyFrom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180311ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                    {::i2c::class_of<::Animancer::MixerTransition2D*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::MixerTransition2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerTransition2D::*)()>(&::Animancer::MixerTransition2D::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::MixerTransition2D_MixerType& Animancer::MixerTransition2D::__cordl_internal_get__Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr ::Animancer::MixerTransition2D_MixerType const& Animancer::MixerTransition2D::__cordl_internal_get__Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr void Animancer::MixerTransition2D::__cordl_internal_set__Type(::Animancer::MixerTransition2D_MixerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type = value;
}
inline ::by_ref<::Animancer::MixerTransition2D_MixerType> Animancer::MixerTransition2D::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::MixerTransition2D_MixerType>>(this, ___internal_method);
}
inline ::Animancer::MixerState_1<::UnityEngine::Vector2>* Animancer::MixerTransition2D::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerTransition2D*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::MixerState_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void Animancer::MixerTransition2D::CopyFrom(::Animancer::MixerTransition2D*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerTransition2D*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::MixerTransition2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::MixerTransition2D* Animancer::MixerTransition2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerTransition2D*>());
}
/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition2D"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::ManualMixerState_ITransition2D*() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition2D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ManualMixerState_ITransition2D"
constexpr ::Animancer::ManualMixerState_ITransition2D* Animancer::MixerTransition2D::i___Animancer__ManualMixerState_ITransition2D() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition2D*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* Animancer::MixerTransition2D::i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::MixerTransition2D::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::MixerTransition2D::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::MixerTransition2D::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>"
constexpr  Animancer::MixerTransition2D::operator ::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>"
constexpr ::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>* Animancer::MixerTransition2D::i___Animancer__ICopyable_1___Animancer__MixerTransition2D__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerTransition2D*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::MixerTransition2D::MixerTransition2D()   {
}
