#pragma once
// IWYU pragma private; include "Animancer/PlayableAssetTransitionAsset.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_impl.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_impl.hpp"
#include "Animancer/zzzz__PlayableAssetTransitionAsset_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__PlayableAssetState_def.hpp"
#include "Animancer/zzzz__PlayableAssetTransitionAsset_def.hpp"
#include "Animancer/zzzz__PlayableAssetTransition_def.hpp"
//  Writing Method size for method: ::Animancer::PlayableAssetTransitionAsset_UnShared._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransitionAsset_UnShared::*)()>(&::Animancer::PlayableAssetTransitionAsset_UnShared::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransitionAsset_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::PlayableAssetTransitionAsset_UnShared::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransitionAsset_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::PlayableAssetTransitionAsset_UnShared* Animancer::PlayableAssetTransitionAsset_UnShared::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::PlayableAssetTransitionAsset_UnShared*>());
}
/// @brief Convert operator to "::Animancer::PlayableAssetState_ITransition"
constexpr  Animancer::PlayableAssetTransitionAsset_UnShared::operator ::Animancer::PlayableAssetState_ITransition*() noexcept {
return static_cast<::Animancer::PlayableAssetState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::PlayableAssetState_ITransition"
constexpr ::Animancer::PlayableAssetState_ITransition* Animancer::PlayableAssetTransitionAsset_UnShared::i___Animancer__PlayableAssetState_ITransition() noexcept {
return static_cast<::Animancer::PlayableAssetState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr  Animancer::PlayableAssetTransitionAsset_UnShared::operator ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>* Animancer::PlayableAssetTransitionAsset_UnShared::i___Animancer__ITransition_1___Animancer__PlayableAssetState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::PlayableAssetTransitionAsset_UnShared::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::PlayableAssetTransitionAsset_UnShared::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::PlayableAssetTransitionAsset_UnShared::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::PlayableAssetTransitionAsset_UnShared::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::PlayableAssetTransitionAsset_UnShared::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::PlayableAssetTransitionAsset_UnShared::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::PlayableAssetTransitionAsset_UnShared::PlayableAssetTransitionAsset_UnShared()   {
}
//  Writing Method size for method: ::Animancer::PlayableAssetTransitionAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransitionAsset::*)()>(&::Animancer::PlayableAssetTransitionAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransitionAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::PlayableAssetTransitionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransitionAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::PlayableAssetTransitionAsset* Animancer::PlayableAssetTransitionAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::PlayableAssetTransitionAsset*>());
}
// Ctor Parameters []
constexpr ::Animancer::PlayableAssetTransitionAsset::PlayableAssetTransitionAsset()   {
}
