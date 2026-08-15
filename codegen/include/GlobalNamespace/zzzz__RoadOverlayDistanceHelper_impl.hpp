#pragma once
// IWYU pragma private; include "GlobalNamespace/RoadOverlayDistanceHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RoadOverlayDistanceHelper_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoadOverlayDistanceHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoadOverlayDistanceHelper::*)()>(&::GlobalNamespace::RoadOverlayDistanceHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadOverlayDistanceHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::Road>& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_targetRoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRoad;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Road> const& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_targetRoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRoad;
}
constexpr void GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_set_targetRoad(::UnityW<::JBooth::MicroVerseCore::Road>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRoad = value;
}
constexpr float_t& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_editingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editingPosition;
}
constexpr float_t const& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_editingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editingPosition;
}
constexpr void GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_set_editingPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editingPosition = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_savedPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedPositions;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_savedPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedPositions;
}
constexpr void GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_set_savedPositions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedPositions = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_savedSplineChoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedSplineChoices;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>* const& GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_get_savedSplineChoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedSplineChoices;
}
constexpr void GlobalNamespace::RoadOverlayDistanceHelper::__cordl_internal_set_savedSplineChoices(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedSplineChoices = value;
}
inline void GlobalNamespace::RoadOverlayDistanceHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoadOverlayDistanceHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoadOverlayDistanceHelper* GlobalNamespace::RoadOverlayDistanceHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoadOverlayDistanceHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoadOverlayDistanceHelper::RoadOverlayDistanceHelper()   {
}
