#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorJobExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorJobExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::TransformStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182233af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182233aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182233a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindSceneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::TransformSceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182233990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182233e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182233c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182233bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamTransform_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamProperty_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Type*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneTransform_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182233ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::TransformStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::TransformStreamHandle>(nullptr, ___internal_method, animator, transform);
}
inline ::UnityEngine::Animations::PropertyStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertyStreamHandle>(nullptr, ___internal_method, animator, transform, type, property);
}
inline ::UnityEngine::Animations::PropertyStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, bool  isObjectReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertyStreamHandle>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference);
}
inline ::UnityEngine::Animations::TransformSceneHandle UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::TransformSceneHandle>(nullptr, ___internal_method, animator, transform);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformSceneHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformSceneHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimatorJobExtensions::AnimatorJobExtensions()   {
}
