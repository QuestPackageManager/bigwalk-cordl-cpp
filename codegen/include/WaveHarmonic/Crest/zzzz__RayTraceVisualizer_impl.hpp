#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RayTraceVisualizer.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RayTraceVisualizer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RayCastHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RayTraceVisualizer.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::RayTraceVisualizer::*)()>(&::WaveHarmonic::Crest::RayTraceVisualizer::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18257caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RayTraceVisualizer.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RayTraceVisualizer::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::RayTraceVisualizer::OnUpdate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18257c640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RayTraceVisualizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RayTraceVisualizer::*)()>(&::WaveHarmonic::Crest::RayTraceVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18257c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::RayCastHelper*& WaveHarmonic::Crest::RayTraceVisualizer::__cordl_internal_get__RayCast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RayCast;
}
constexpr ::WaveHarmonic::Crest::RayCastHelper* const& WaveHarmonic::Crest::RayTraceVisualizer::__cordl_internal_get__RayCast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RayCast;
}
constexpr void WaveHarmonic::Crest::RayTraceVisualizer::__cordl_internal_set__RayCast(::WaveHarmonic::Crest::RayCastHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RayCast = value;
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::RayTraceVisualizer::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::RayTraceVisualizer::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::RayTraceVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayTraceVisualizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::RayTraceVisualizer* WaveHarmonic::Crest::RayTraceVisualizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::RayTraceVisualizer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RayTraceVisualizer::RayTraceVisualizer()   {
}
