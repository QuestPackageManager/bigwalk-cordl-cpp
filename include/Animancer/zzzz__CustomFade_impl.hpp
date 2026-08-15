#pragma once
// IWYU pragma private; include "Animancer/CustomFade.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "Animancer/zzzz__CustomFade_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__CustomFade_Curve_def.hpp"
#include "Animancer/zzzz__CustomFade_Delegate_def.hpp"
#include "Animancer/zzzz__CustomFade_def.hpp"
#include "Animancer/zzzz__Easing_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Animancer::CustomFade_NodeWeight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade_NodeWeight::*)(::Animancer::AnimancerNode*)>(&::Animancer::CustomFade_NodeWeight::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180311f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade_NodeWeight>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::CustomFade_NodeWeight::_ctor(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade_NodeWeight>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node);
}
// Ctor Parameters [CppParam { name: "Node", ty: "::Animancer::AnimancerNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "StartingWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::CustomFade_NodeWeight::CustomFade_NodeWeight(::Animancer::AnimancerNode*  Node, float_t  StartingWeight) noexcept  {
this->Node = Node;
this->StartingWeight = StartingWeight;
}
// Ctor Parameters []
constexpr ::Animancer::CustomFade_NodeWeight::CustomFade_NodeWeight()   {
}
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerComponent*, ::UnityEngine::AnimationCurve*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180307ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerPlayable*, ::UnityEngine::AnimationCurve*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180307c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*, ::UnityEngine::AnimationCurve*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180307ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*, ::UnityEngine::AnimationCurve*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180307d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerComponent*, ::System::Func_2<float_t,float_t>*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180308210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerPlayable*, ::System::Func_2<float_t,float_t>*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180307f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*, ::System::Func_2<float_t,float_t>*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180307db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*, ::System::Func_2<float_t,float_t>*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180307b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerComponent*, ::Animancer::Easing_Function)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerPlayable*, ::Animancer::Easing_Function)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*, ::Animancer::Easing_Function)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180307ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*, ::Animancer::Easing_Function)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180307e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade::*)(::Animancer::AnimancerState*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180308010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade::*)(::Animancer::AnimancerNode*)>(&::Animancer::CustomFade::Apply)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803082b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.CalculateWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::CustomFade::*)(float_t)>(&::Animancer::CustomFade::CalculateWeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CustomFade*>(),
                    {::i2c::class_of<::Animancer::CustomFade*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade::*)()>(&::Animancer::CustomFade::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CustomFade*>(),
                    {::i2c::class_of<::Animancer::CustomFade*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.Animancer_IUpdatable_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade::*)()>(&::Animancer::CustomFade::Animancer_IUpdatable_Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1803077a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade.ForceFinishFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*)>(&::Animancer::CustomFade::ForceFinishFade)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803083a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"ForceFinishFade", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CustomFade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CustomFade::*)()>(&::Animancer::CustomFade::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Animancer::CustomFade::__cordl_internal_get__Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr float_t const& Animancer::CustomFade::__cordl_internal_get__Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr void Animancer::CustomFade::__cordl_internal_set__Time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Time = value;
}
constexpr float_t& Animancer::CustomFade::__cordl_internal_get__FadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeSpeed;
}
constexpr float_t const& Animancer::CustomFade::__cordl_internal_get__FadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeSpeed;
}
constexpr void Animancer::CustomFade::__cordl_internal_set__FadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FadeSpeed = value;
}
constexpr ::Animancer::CustomFade_NodeWeight& Animancer::CustomFade::__cordl_internal_get__Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr ::Animancer::CustomFade_NodeWeight const& Animancer::CustomFade::__cordl_internal_get__Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr void Animancer::CustomFade::__cordl_internal_set__Target(::Animancer::CustomFade_NodeWeight  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target = value;
}
constexpr ::Animancer::AnimancerLayer*& Animancer::CustomFade::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr ::Animancer::AnimancerLayer* const& Animancer::CustomFade::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void Animancer::CustomFade::__cordl_internal_set__Layer(::Animancer::AnimancerLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr int32_t& Animancer::CustomFade::__cordl_internal_get__CommandCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandCount;
}
constexpr int32_t const& Animancer::CustomFade::__cordl_internal_get__CommandCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandCount;
}
constexpr void Animancer::CustomFade::__cordl_internal_set__CommandCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommandCount = value;
}
constexpr ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*& Animancer::CustomFade::__cordl_internal_get_FadeOutNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeOutNodes;
}
constexpr ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>* const& Animancer::CustomFade::__cordl_internal_get_FadeOutNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadeOutNodes;
}
constexpr void Animancer::CustomFade::__cordl_internal_set_FadeOutNodes(::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FadeOutNodes = value;
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerComponent*  animancer, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, curve);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, curve);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerState*  state, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, curve);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerNode*  node, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, curve);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerComponent*  animancer, ::System::Func_2<float_t,float_t>*  calculateWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, calculateWeight);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerPlayable*  animancer, ::System::Func_2<float_t,float_t>*  calculateWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, calculateWeight);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerState*  state, ::System::Func_2<float_t,float_t>*  calculateWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, calculateWeight);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerNode*  node, ::System::Func_2<float_t,float_t>*  calculateWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, calculateWeight);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerComponent*  animancer, ::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerComponent*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, function);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerPlayable*  animancer, ::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, function);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerState*  state, ::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, function);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerNode*  node, ::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, function);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::CustomFade::Apply(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline float_t Animancer::CustomFade::CalculateWeight(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CustomFade*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, progress);
}
inline void Animancer::CustomFade::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CustomFade*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::CustomFade::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::CustomFade::ForceFinishFade(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {"ForceFinishFade", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
inline void Animancer::CustomFade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CustomFade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::CustomFade* Animancer::CustomFade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::CustomFade*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::CustomFade::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::CustomFade::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::CustomFade::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::CustomFade::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::CustomFade::CustomFade()   {
}
