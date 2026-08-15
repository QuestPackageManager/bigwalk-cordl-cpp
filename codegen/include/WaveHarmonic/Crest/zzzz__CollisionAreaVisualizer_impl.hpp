#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionAreaVisualizer.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionAreaVisualizer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__DebugUtility_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionAreaVisualizer.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::CollisionAreaVisualizer::*)()>(&::WaveHarmonic::Crest::CollisionAreaVisualizer::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182571a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionAreaVisualizer.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionAreaVisualizer::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionAreaVisualizer::OnUpdate)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1825712a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionAreaVisualizer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionAreaVisualizer::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*)>(&::WaveHarmonic::Crest::CollisionAreaVisualizer::Render)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1825717b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {"Render", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionAreaVisualizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionAreaVisualizer::*)()>(&::WaveHarmonic::Crest::CollisionAreaVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825719e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::CollisionLayer& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr ::WaveHarmonic::Crest::CollisionLayer const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr float_t& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ObjectWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectWidth;
}
constexpr float_t const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ObjectWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectWidth;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__ObjectWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectWidth = value;
}
constexpr float_t& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__StepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StepSize;
}
constexpr float_t const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__StepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StepSize;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__StepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StepSize = value;
}
constexpr int32_t& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__Steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Steps;
}
constexpr int32_t const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__Steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Steps;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__Steps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Steps = value;
}
constexpr bool& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__UseDisplacements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseDisplacements;
}
constexpr bool const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__UseDisplacements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseDisplacements;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__UseDisplacements(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseDisplacements = value;
}
constexpr bool& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__UseNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseNormals;
}
constexpr bool const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__UseNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseNormals;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__UseNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseNormals = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultHeights;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultHeights;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__ResultHeights(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultHeights = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultDisplacements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultDisplacements;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultDisplacements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultDisplacements;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__ResultDisplacements(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultDisplacements = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultNormals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__ResultNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultNormals;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__ResultNormals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultNormals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__SamplePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplePositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_get__SamplePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplePositions;
}
constexpr void WaveHarmonic::Crest::CollisionAreaVisualizer::__cordl_internal_set__SamplePositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplePositions = value;
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::CollisionAreaVisualizer::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CollisionAreaVisualizer::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::CollisionAreaVisualizer::Render(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {"Render", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, draw);
}
inline void WaveHarmonic::Crest::CollisionAreaVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionAreaVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::CollisionAreaVisualizer* WaveHarmonic::Crest::CollisionAreaVisualizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionAreaVisualizer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionAreaVisualizer::CollisionAreaVisualizer()   {
}
