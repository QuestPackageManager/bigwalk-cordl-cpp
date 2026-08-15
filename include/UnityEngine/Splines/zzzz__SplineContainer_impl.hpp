#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/Splines/zzzz__Spline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "UnityEngine/Splines/zzzz__KnotLinkCollection_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "spline", ty: "::UnityEngine::Splines::ISpline*", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeSpline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineContainer_SplineToNative::SplineContainer_SplineToNative(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Splines::NativeSpline  nativeSpline) noexcept  {
this->spline = spline;
this->nativeSpline = nativeSpline;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineContainer_SplineToNative::SplineContainer_SplineToNative()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::*)()>(&::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0._set_Splines_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::_set_Splines_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18217a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0*>(),
                        {"<set_Splines>b__0", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* const& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_set_value(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr int32_t& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::System::Predicate_1<::UnityEngine::Splines::Spline*>*& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Predicate_1<::UnityEngine::Splines::Spline*>* const& UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::__cordl_internal_set___9__0(::System::Predicate_1<::UnityEngine::Splines::Spline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::_set_Splines_b__0(::UnityEngine::Splines::Spline*  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0*>(),
                        {"<set_Splines>b__0", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline);
}
inline ::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0* UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineContainer___c__DisplayClass22_0::SplineContainer___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.add_SplineAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::add_SplineAdded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineAdded", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.remove_SplineAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::remove_SplineAdded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineAdded", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.add_SplineRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::add_SplineRemoved)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineRemoved", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.remove_SplineRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::remove_SplineRemoved)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineRemoved", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.add_SplineReordered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::add_SplineReordered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineReordered", {}, {::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.remove_SplineReordered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*)>(&::UnityEngine::Splines::SplineContainer::remove_SplineReordered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18216b950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineReordered", {}, {::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.get_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::get_Splines)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18216b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Splines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.set_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*)>(&::UnityEngine::Splines::SplineContainer::set_Splines)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x18216ba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"set_Splines", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*, ::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::SplineContainer::IndexOf)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18216abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>(), ::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.get_KnotLinkCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::KnotLinkCollection* (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::get_KnotLinkCollection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_KnotLinkCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::SplineContainer::*)(int32_t)>(&::UnityEngine::Splines::SplineContainer::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181642b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::Finalize)> {
  constexpr static std::size_t size = 0xa670;
  constexpr static std::size_t addrs = 0x180631430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18216ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18216adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216adb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.Warmup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::Warmup)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18216b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Warmup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.ClearCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::ClearCaches)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18216a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"ClearCaches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.DisposeNativeSplinesCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::DisposeNativeSplinesCache)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18216a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"DisposeNativeSplinesCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnSplineChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)(::UnityEngine::Splines::Spline*, int32_t, ::UnityEngine::Splines::SplineModification)>(&::UnityEngine::Splines::SplineContainer::OnSplineChanged)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18216aec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnKnotModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)(::UnityEngine::Splines::Spline*, int32_t)>(&::UnityEngine::Splines::SplineContainer::OnKnotModified)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18216ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnKnotModified", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.get_IsNonUniformlyScaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::get_IsNonUniformlyScaled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18216b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_IsNonUniformlyScaled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.get_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::get_Spline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.set_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)(::UnityEngine::Splines::Spline*)>(&::UnityEngine::Splines::SplineContainer::set_Spline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"set_Spline", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineContainer::*)(float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineContainer::Evaluate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18216ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineContainer::*)(int32_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineContainer::Evaluate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Evaluate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluatePosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(int32_t, float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluatePosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateTangent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(int32_t, float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateTangent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateUpVector)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(int32_t, float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateUpVector)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateAcceleration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.EvaluateAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineContainer::*)(int32_t, float_t)>(&::UnityEngine::Splines::SplineContainer::EvaluateAcceleration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.CalculateLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::CalculateLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"CalculateLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.CalculateLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineContainer::*)(int32_t)>(&::UnityEngine::Splines::SplineContainer::CalculateLength)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18216a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"CalculateLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18216ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineContainer::*)()>(&::UnityEngine::Splines::SplineContainer::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18216b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::Spline*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Spline;
}
constexpr ::UnityEngine::Splines::Spline* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Spline;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_Spline(::UnityEngine::Splines::Spline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Spline = value;
}
constexpr ::ArrayW<::UnityEngine::Splines::Spline*>& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Splines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Splines;
}
constexpr ::ArrayW<::UnityEngine::Splines::Spline*> const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Splines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Splines;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_Splines(::ArrayW<::UnityEngine::Splines::Spline*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Splines = value;
}
constexpr ::UnityEngine::Splines::KnotLinkCollection*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Knots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Knots;
}
constexpr ::UnityEngine::Splines::KnotLinkCollection* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_Knots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Knots;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_Knots(::UnityEngine::Splines::KnotLinkCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Knots = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_ReorderedSplinesIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReorderedSplinesIndices;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_ReorderedSplinesIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReorderedSplinesIndices;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_ReorderedSplinesIndices(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t,int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReorderedSplinesIndices = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_RemovedSplinesIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemovedSplinesIndices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_RemovedSplinesIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemovedSplinesIndices;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_RemovedSplinesIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RemovedSplinesIndices = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_AddedSplinesIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedSplinesIndices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_AddedSplinesIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedSplinesIndices;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_AddedSplinesIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddedSplinesIndices = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_ReadOnlySplines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReadOnlySplines;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_ReadOnlySplines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReadOnlySplines;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_ReadOnlySplines(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Splines::Spline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReadOnlySplines = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_NativeSplinesCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSplinesCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>* const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_NativeSplinesCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSplinesCache;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_NativeSplinesCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Splines::ISpline*,::UnityEngine::Splines::NativeSpline>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeSplinesCache = value;
}
constexpr ::Unity::Mathematics::float4x4& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_NativeSplinesCacheTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSplinesCacheTransform;
}
constexpr ::Unity::Mathematics::float4x4 const& UnityEngine::Splines::SplineContainer::__cordl_internal_get_m_NativeSplinesCacheTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeSplinesCacheTransform;
}
constexpr void UnityEngine::Splines::SplineContainer::__cordl_internal_set_m_NativeSplinesCacheTransform(::Unity::Mathematics::float4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeSplinesCacheTransform = value;
}
inline void UnityEngine::Splines::SplineContainer::setStaticF_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*, "SplineAdded", ::UnityEngine::Splines::SplineContainer*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>* UnityEngine::Splines::SplineContainer::getStaticF_SplineAdded()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*, "SplineAdded", ::UnityEngine::Splines::SplineContainer*>();
}
inline void UnityEngine::Splines::SplineContainer::setStaticF_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*, "SplineRemoved", ::UnityEngine::Splines::SplineContainer*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>* UnityEngine::Splines::SplineContainer::getStaticF_SplineRemoved()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*, "SplineRemoved", ::UnityEngine::Splines::SplineContainer*>();
}
inline void UnityEngine::Splines::SplineContainer::setStaticF_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*, "SplineReordered", ::UnityEngine::Splines::SplineContainer*>(std::forward<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*>(value));
}
inline ::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>* UnityEngine::Splines::SplineContainer::getStaticF_SplineReordered()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*, "SplineReordered", ::UnityEngine::Splines::SplineContainer*>();
}
inline void UnityEngine::Splines::SplineContainer::setStaticF_s_AllocPreventionHelperBuffer(::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineContainer_SplineToNative>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineContainer_SplineToNative>*, "s_AllocPreventionHelperBuffer", ::UnityEngine::Splines::SplineContainer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineContainer_SplineToNative>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineContainer_SplineToNative>* UnityEngine::Splines::SplineContainer::getStaticF_s_AllocPreventionHelperBuffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineContainer_SplineToNative>*, "s_AllocPreventionHelperBuffer", ::UnityEngine::Splines::SplineContainer*>();
}
inline void UnityEngine::Splines::SplineContainer::add_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineAdded", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineContainer::remove_SplineAdded(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineAdded", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineContainer::add_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineRemoved", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineContainer::remove_SplineRemoved(::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineRemoved", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineContainer::add_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"add_SplineReordered", {}, {::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineContainer::remove_SplineReordered(::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"remove_SplineReordered", {}, {::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Splines::SplineContainer>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* UnityEngine::Splines::SplineContainer::get_Splines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Splines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::set_Splines(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"set_Splines", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::SplineContainer::IndexOf(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  self, ::UnityEngine::Splines::Spline*  elementToFind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>(), ::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self, elementToFind);
}
inline ::UnityEngine::Splines::KnotLinkCollection* UnityEngine::Splines::SplineContainer::get_KnotLinkCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_KnotLinkCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::KnotLinkCollection*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineContainer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::SplineContainer::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::Warmup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Warmup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::ClearCaches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"ClearCaches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::DisposeNativeSplinesCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"DisposeNativeSplinesCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  index, ::UnityEngine::Splines::SplineModification  modificationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, index, modificationType);
}
inline void UnityEngine::Splines::SplineContainer::OnKnotModified(::UnityEngine::Splines::Spline*  spline, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnKnotModified", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, index);
}
inline bool UnityEngine::Splines::SplineContainer::get_IsNonUniformlyScaled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_IsNonUniformlyScaled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineContainer::get_Spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"get_Spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::set_Spline(::UnityEngine::Splines::Spline*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"set_Spline", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::SplineContainer::Evaluate(float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t, position, tangent, upVector);
}
inline bool UnityEngine::Splines::SplineContainer::Evaluate(int32_t  splineIndex, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"Evaluate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, splineIndex, t, position, tangent, upVector);
}
template<typename T>
inline bool UnityEngine::Splines::SplineContainer::Evaluate(T  spline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent, ::by_ref<::Unity::Mathematics::float3>  upVector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"Evaluate", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline, t, position, tangent, upVector);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluatePosition(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluatePosition(int32_t  splineIndex, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, splineIndex, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluatePosition(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"EvaluatePosition", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, spline, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateTangent(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateTangent(int32_t  splineIndex, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateTangent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, splineIndex, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateTangent(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"EvaluateTangent", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, spline, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateUpVector(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateUpVector(int32_t  splineIndex, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateUpVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, splineIndex, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateUpVector(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"EvaluateUpVector", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, spline, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateAcceleration(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateAcceleration(int32_t  splineIndex, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"EvaluateAcceleration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, splineIndex, t);
}
template<typename T>
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineContainer::EvaluateAcceleration(T  spline, float_t  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"EvaluateAcceleration", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, spline, t);
}
inline float_t UnityEngine::Splines::SplineContainer::CalculateLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"CalculateLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineContainer::CalculateLength(int32_t  splineIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"CalculateLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, splineIndex);
}
inline void UnityEngine::Splines::SplineContainer::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineContainer::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Splines::NativeSpline UnityEngine::Splines::SplineContainer::GetOrBakeNativeSpline(T  spline)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                    {"GetOrBakeNativeSpline", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::NativeSpline>(this, ___internal_method, spline);
}
inline void UnityEngine::Splines::SplineContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineContainer* UnityEngine::Splines::SplineContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineContainer*>());
}
/// @brief Convert operator to "::UnityEngine::Splines::ISplineContainer"
constexpr  UnityEngine::Splines::SplineContainer::operator ::UnityEngine::Splines::ISplineContainer*() noexcept {
return static_cast<::UnityEngine::Splines::ISplineContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::ISplineContainer"
constexpr ::UnityEngine::Splines::ISplineContainer* UnityEngine::Splines::SplineContainer::i___UnityEngine__Splines__ISplineContainer() noexcept {
return static_cast<::UnityEngine::Splines::ISplineContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Splines::SplineContainer::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Splines::SplineContainer::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineContainer::SplineContainer()   {
}
