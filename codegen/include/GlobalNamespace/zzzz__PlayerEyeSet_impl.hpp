#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEyeSet.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeSet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair.GetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair::*)(int32_t, int32_t)>(&::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair::GetPos)> {
  constexpr static std::size_t size = 0xe30;
  constexpr static std::size_t addrs = 0x18035c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>(),
                        {"GetPos", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair::GetPos(int32_t  xCount, int32_t  yCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>(),
                        {"GetPos", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, xCount, yCount);
}
// Ctor Parameters [CppParam { name: "mood", ty: "::GlobalNamespace::PlayerEyeMood", modifiers: "", def_value: Some("{}") }, CppParam { name: "xIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair::PlayerEyeSet_EyeMoodTexturePair(::GlobalNamespace::PlayerEyeMood  mood, int32_t  xIndex, int32_t  yIndex) noexcept  {
this->mood = mood;
this->xIndex = xIndex;
this->yIndex = yIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair::PlayerEyeSet_EyeMoodTexturePair()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerEyeSet.GetMoodData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair (::GlobalNamespace::PlayerEyeSet::*)(::GlobalNamespace::PlayerEyeMood)>(&::GlobalNamespace::PlayerEyeSet::GetMoodData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803605b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {"GetMoodData", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyeSet.GetMoodOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PlayerEyeSet::*)(::GlobalNamespace::PlayerEyeMood)>(&::GlobalNamespace::PlayerEyeSet::GetMoodOffset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803606a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {"GetMoodOffset", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyeSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyeSet::*)()>(&::GlobalNamespace::PlayerEyeSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_texturePairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texturePairs;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>* const& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_texturePairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texturePairs;
}
constexpr void GlobalNamespace::PlayerEyeSet::__cordl_internal_set_texturePairs(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texturePairs = value;
}
constexpr int32_t& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_gridSizeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeX;
}
constexpr int32_t const& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_gridSizeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeX;
}
constexpr void GlobalNamespace::PlayerEyeSet::__cordl_internal_set_gridSizeX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridSizeX = value;
}
constexpr int32_t& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_gridSizeY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeY;
}
constexpr int32_t const& GlobalNamespace::PlayerEyeSet::__cordl_internal_get_gridSizeY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeY;
}
constexpr void GlobalNamespace::PlayerEyeSet::__cordl_internal_set_gridSizeY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridSizeY = value;
}
inline ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair GlobalNamespace::PlayerEyeSet::GetMoodData(::GlobalNamespace::PlayerEyeMood  mood)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {"GetMoodData", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>(this, ___internal_method, mood);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PlayerEyeSet::GetMoodOffset(::GlobalNamespace::PlayerEyeMood  mood)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {"GetMoodOffset", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, mood);
}
inline void GlobalNamespace::PlayerEyeSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyeSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerEyeSet* GlobalNamespace::PlayerEyeSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerEyeSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerEyeSet::PlayerEyeSet()   {
}
