#pragma once
// IWYU pragma private; include "Animancer/MixerTransition2DAsset.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_impl.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_impl.hpp"
#include "Animancer/zzzz__MixerTransition2DAsset_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__ManualMixerState_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "Animancer/zzzz__MixerTransition2DAsset_def.hpp"
#include "Animancer/zzzz__MixerTransition2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::MixerTransition2DAsset_UnShared._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerTransition2DAsset_UnShared::*)()>(&::Animancer::MixerTransition2DAsset_UnShared::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2DAsset_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::MixerTransition2DAsset_UnShared::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2DAsset_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::MixerTransition2DAsset_UnShared* Animancer::MixerTransition2DAsset_UnShared::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerTransition2DAsset_UnShared*>());
}
/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition2D"
constexpr  Animancer::MixerTransition2DAsset_UnShared::operator ::Animancer::ManualMixerState_ITransition2D*() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition2D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ManualMixerState_ITransition2D"
constexpr ::Animancer::ManualMixerState_ITransition2D* Animancer::MixerTransition2DAsset_UnShared::i___Animancer__ManualMixerState_ITransition2D() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition2D*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr  Animancer::MixerTransition2DAsset_UnShared::operator ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* Animancer::MixerTransition2DAsset_UnShared::i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::MixerTransition2DAsset_UnShared::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::MixerTransition2DAsset_UnShared::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::MixerTransition2DAsset_UnShared::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::MixerTransition2DAsset_UnShared::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::MixerTransition2DAsset_UnShared::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::MixerTransition2DAsset_UnShared::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::MixerTransition2DAsset_UnShared::MixerTransition2DAsset_UnShared()   {
}
//  Writing Method size for method: ::Animancer::MixerTransition2DAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::MixerTransition2DAsset::*)()>(&::Animancer::MixerTransition2DAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2DAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::MixerTransition2DAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition2DAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::MixerTransition2DAsset* Animancer::MixerTransition2DAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerTransition2DAsset*>());
}
// Ctor Parameters []
constexpr ::Animancer::MixerTransition2DAsset::MixerTransition2DAsset()   {
}
