#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundCullingGroupComparer.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundCullingGroupComparer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundCullingGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroupComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VegetationSoundCullingGroupComparer::*)(::ArrayW<::GlobalNamespace::AudioRandomContainer*>)>(&::GlobalNamespace::VegetationSoundCullingGroupComparer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroupComparer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioRandomContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VegetationSoundCullingGroupComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VegetationSoundCullingGroupComparer::*)(::GlobalNamespace::VegetationSoundCullingGroup*, ::GlobalNamespace::VegetationSoundCullingGroup*)>(&::GlobalNamespace::VegetationSoundCullingGroupComparer::Compare)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f2840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroupComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>(), ::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>& GlobalNamespace::VegetationSoundCullingGroupComparer::__cordl_internal_get__customOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customOrder;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>> const& GlobalNamespace::VegetationSoundCullingGroupComparer::__cordl_internal_get__customOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customOrder;
}
constexpr void GlobalNamespace::VegetationSoundCullingGroupComparer::__cordl_internal_set__customOrder(::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customOrder = value;
}
inline void GlobalNamespace::VegetationSoundCullingGroupComparer::_ctor(::ArrayW<::GlobalNamespace::AudioRandomContainer*>  customOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroupComparer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioRandomContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customOrder);
}
inline int32_t GlobalNamespace::VegetationSoundCullingGroupComparer::Compare(::GlobalNamespace::VegetationSoundCullingGroup*  x, ::GlobalNamespace::VegetationSoundCullingGroup*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VegetationSoundCullingGroupComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>(), ::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::VegetationSoundCullingGroupComparer* GlobalNamespace::VegetationSoundCullingGroupComparer::New_ctor(::ArrayW<::GlobalNamespace::AudioRandomContainer*>  customOrder)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VegetationSoundCullingGroupComparer*>(customOrder));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr  GlobalNamespace::VegetationSoundCullingGroupComparer::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>* GlobalNamespace::VegetationSoundCullingGroupComparer::i___System__Collections__Generic__IComparer_1___GlobalNamespace__VegetationSoundCullingGroup__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VegetationSoundCullingGroupComparer::VegetationSoundCullingGroupComparer()   {
}
