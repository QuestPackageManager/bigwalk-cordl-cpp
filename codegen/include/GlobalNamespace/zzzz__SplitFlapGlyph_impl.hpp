#pragma once
// IWYU pragma private; include "GlobalNamespace/SplitFlapGlyph.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "GlobalNamespace/zzzz__AnimancerFrameHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PegTileRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType::SplitFlapGlyph_SplitFlapType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType::SplitFlapGlyph_SplitFlapType()   {
}
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType  GlobalNamespace::SplitFlapGlyph_SplitFlapType::PropGroup{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType  GlobalNamespace::SplitFlapGlyph_SplitFlapType::PlayerColor{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)()>(&::GlobalNamespace::SplitFlapGlyph::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180415820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.GetPropGroupByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PropGroup (::GlobalNamespace::SplitFlapGlyph::*)(int32_t)>(&::GlobalNamespace::SplitFlapGlyph::GetPropGroupByIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180415ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetPropGroupByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.GetPegTileCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PropGroup (*)(int32_t, ::GlobalNamespace::PegTileDataSet*)>(&::GlobalNamespace::SplitFlapGlyph::GetPegTileCircle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180415a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetPegTileCircle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PegTileDataSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.SetFlaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)(int32_t, int32_t)>(&::GlobalNamespace::SplitFlapGlyph::SetFlaps)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180415f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetFlaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.SetAimGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)(::GlobalNamespace::PropGroup)>(&::GlobalNamespace::SplitFlapGlyph::SetAimGlyph)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180415d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimGlyph", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.SetAimColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)(::System::Nullable_1<int32_t>)>(&::GlobalNamespace::SplitFlapGlyph::SetAimColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180415d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimColor", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.GetNextIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SplitFlapGlyph::*)(int32_t)>(&::GlobalNamespace::SplitFlapGlyph::GetNextIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180415990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetNextIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.StartFlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)()>(&::GlobalNamespace::SplitFlapGlyph::StartFlap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180416260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"StartFlap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.SetAimIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)(int32_t)>(&::GlobalNamespace::SplitFlapGlyph::SetAimIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180415e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.OnEndClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)()>(&::GlobalNamespace::SplitFlapGlyph::OnEndClip)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180415b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"OnEndClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph.OnStartClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)()>(&::GlobalNamespace::SplitFlapGlyph::OnStartClip)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180415c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"OnStartClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplitFlapGlyph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplitFlapGlyph::*)()>(&::GlobalNamespace::SplitFlapGlyph::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180416350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_splitFlapType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapType;
}
constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_splitFlapType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapType;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_splitFlapType(::GlobalNamespace::SplitFlapGlyph_SplitFlapType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitFlapType = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_pegTileDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_pegTileDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileDataSet = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_playerLookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_playerLookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookSet;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_playerLookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLookSet = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_upperFlapTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperFlapTop;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_upperFlapTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperFlapTop;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_upperFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperFlapTop = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_upperFlapBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperFlapBottom;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_upperFlapBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperFlapBottom;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_upperFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperFlapBottom = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_lowerFlapTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerFlapTop;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_lowerFlapTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerFlapTop;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_lowerFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowerFlapTop = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_lowerFlapBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerFlapBottom;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_lowerFlapBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerFlapBottom;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_lowerFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowerFlapBottom = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_rearFlapTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearFlapTop;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_rearFlapTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearFlapTop;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_rearFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rearFlapTop = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_rearFlapBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearFlapBottom;
}
constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_rearFlapBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearFlapBottom;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_rearFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rearFlapBottom = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animancerFrameHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animancerFrameHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerFrameHelper = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animationClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_animationClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationClip;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_animationClip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationClip = value;
}
constexpr float_t& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_aniamtionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aniamtionSpeed;
}
constexpr float_t const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_aniamtionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aniamtionSpeed;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_aniamtionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aniamtionSpeed = value;
}
constexpr bool& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_flapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_flapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flapSound;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_flapSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flapSound = value;
}
constexpr ::GlobalNamespace::PegTileSet& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_tileSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSet;
}
constexpr ::GlobalNamespace::PegTileSet const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_tileSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSet;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_tileSet(::GlobalNamespace::PegTileSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileSet = value;
}
constexpr int32_t& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr int32_t& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_aimIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimIndex;
}
constexpr int32_t const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_aimIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimIndex;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_aimIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aimIndex = value;
}
constexpr bool& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_hasInitialValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialValue;
}
constexpr bool const& GlobalNamespace::SplitFlapGlyph::__cordl_internal_get_hasInitialValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialValue;
}
constexpr void GlobalNamespace::SplitFlapGlyph::__cordl_internal_set_hasInitialValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialValue = value;
}
inline void GlobalNamespace::SplitFlapGlyph::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropGroup GlobalNamespace::SplitFlapGlyph::GetPropGroupByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetPropGroupByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropGroup>(this, ___internal_method, index);
}
inline ::GlobalNamespace::PropGroup GlobalNamespace::SplitFlapGlyph::GetPegTileCircle(int32_t  index, ::GlobalNamespace::PegTileDataSet*  pegTileDataSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetPegTileCircle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PegTileDataSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropGroup>(nullptr, ___internal_method, index, pegTileDataSet);
}
inline void GlobalNamespace::SplitFlapGlyph::SetFlaps(int32_t  oldIndex, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetFlaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldIndex, newIndex);
}
inline void GlobalNamespace::SplitFlapGlyph::SetAimGlyph(::GlobalNamespace::PropGroup  glyph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimGlyph", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyph);
}
inline void GlobalNamespace::SplitFlapGlyph::SetAimColor(::System::Nullable_1<int32_t>  colorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimColor", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorIndex);
}
inline int32_t GlobalNamespace::SplitFlapGlyph::GetNextIndex(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"GetNextIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startIndex);
}
inline void GlobalNamespace::SplitFlapGlyph::StartFlap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"StartFlap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplitFlapGlyph::SetAimIndex(int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"SetAimIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex);
}
inline void GlobalNamespace::SplitFlapGlyph::OnEndClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"OnEndClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplitFlapGlyph::OnStartClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {"OnStartClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplitFlapGlyph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplitFlapGlyph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplitFlapGlyph* GlobalNamespace::SplitFlapGlyph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplitFlapGlyph*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplitFlapGlyph::SplitFlapGlyph()   {
}
