#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceContainer.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceContainer_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "MA/Flora/zzzz__FloraAdditionalRendererSettings_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceContainer_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceRenderer_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__FloraSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceContainer_Version::FloraInstanceContainer_Version(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_Version::FloraInstanceContainer_Version()   {
}
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::Initial{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::GlobalDensity{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::SerializeDataAsBytes{static_cast<int32_t>(0x3)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::RemoveCullingData{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::GlobalInstanceData{static_cast<int32_t>(0x5)};
constexpr ::MA::Flora::FloraInstanceContainer_Version  MA::Flora::FloraInstanceContainer_Version::Latest{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f48e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, transform);
}
inline ::System::IAsyncResult* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, output, transform, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814f4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814f4660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814f4780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>();
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::FloraLocalToWorld>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::FloraLocalToWorld>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f4d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, transform);
}
inline ::System::IAsyncResult* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, output, transform, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814f4970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814f4aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::FloraLocalToWorld>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814f4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>();
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f5160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output, transform);
}
inline ::System::IAsyncResult* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, output, transform, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate* MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814f4db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814f4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814f5000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>();
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::AxisAlignedBox>)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefabAABB, localTransforms, combinedAABB);
}
inline ::System::IAsyncResult* MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, prefabAABB, localTransforms, combinedAABB, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate* MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814e35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814e3710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::AxisAlignedBox>)>(&::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814e3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>();
}
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::Invoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefabAABB, localTransforms, combinedAABB);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::Finalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.get_Prefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::get_Prefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_Prefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.set_Prefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraInstanceContainer::set_Prefab)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814cac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"set_Prefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.get_InstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::get_InstanceCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814cabb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_InstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.get_InstanceHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::get_InstanceHandles)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814cabd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_InstanceHandles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.get_LocalTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::get_LocalTransforms)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814cabf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_LocalTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814c6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814c8190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814c80b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.OnSystemWasCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::MA::Flora::FloraSystem*)>(&::MA::Flora::FloraInstanceContainer::OnSystemWasCreated)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814c8270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnSystemWasCreated", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.OnSystemWillBeDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::MA::Flora::FloraSystem*)>(&::MA::Flora::FloraInstanceContainer::OnSystemWillBeDestroyed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814c82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnSystemWillBeDestroyed", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814c90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c90c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::GetInstanceHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c7ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.IsValidIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::IsValidIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"IsValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.IsInstanceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::IsInstanceEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814c8020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"IsInstanceEnabled", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.SetInstanceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, bool)>(&::MA::Flora::FloraInstanceContainer::SetInstanceEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"SetInstanceEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::GetInstanceTransform)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814c7e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceTransform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> (::MA::Flora::FloraInstanceContainer::*)(::UnityEngine::Space, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraInstanceContainer::GetInstanceTransforms)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814c7ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::Space>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstancePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::GetInstancePosition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814c7af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstancePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::GetInstanceRotation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814c7c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::GetInstanceScale)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814c7cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.GetInstanceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::GetInstanceBounds)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1814c7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.ClearInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::ClearInstances)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814c7670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"ClearInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::EnsureCapacity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.EnsureAdditionalCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::EnsureAdditionalCapacity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814c7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"EnsureAdditionalCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.AddInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceContainer::*)(::MA::Flora::FloraInstanceTransform, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::AddInstance)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814c6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstance", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.AddInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::AddInstances)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814c6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.AddInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::AddInstances)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1814c67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstancePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstancePosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814c9ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstancePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Quaternion, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceRotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814c9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceScale)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1814c9d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::MA::Flora::FloraInstanceTransform, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1814c9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceTransforms)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1814ca2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceTransforms)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1814ca6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1814c9770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceLocalToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrices)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814c9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.UpdateInstanceLocalToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrices)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1814c9360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.RemoveInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::FloraInstanceContainer::RemoveInstances)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1814c8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"RemoveInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.RemoveInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)(int32_t)>(&::MA::Flora::FloraInstanceContainer::RemoveInstance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814c8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraInstanceContainer::*)(::UnityEngine::Space)>(&::MA::Flora::FloraInstanceContainer::CalculateBounds)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1814c6e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::FloraLocalToWorld>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c9090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c90b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.CalculateCombinedBoundsWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::AxisAlignedBox>)>(&::MA::Flora::FloraInstanceContainer::CalculateCombinedBoundsWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateCombinedBoundsWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceContainer::*)()>(&::MA::Flora::FloraInstanceContainer::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814caac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1814c8780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::FloraLocalToWorld>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1814c8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.TransformInstancesWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1814c8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceContainer.CalculateCombinedBoundsWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>, ::by_ref<::MA::Flora::AxisAlignedBox>)>(&::MA::Flora::FloraInstanceContainer::CalculateCombinedBoundsWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1814c7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateCombinedBoundsWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraInstanceContainer_Version& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr ::MA::Flora::FloraInstanceContainer_Version const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_Version(::MA::Flora::FloraInstanceContainer_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Prefab;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_Prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Prefab = value;
}
constexpr int32_t& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_SerializedTransformCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedTransformCount;
}
constexpr int32_t const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_SerializedTransformCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedTransformCount;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_SerializedTransformCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SerializedTransformCount = value;
}
constexpr ::ArrayW<uint8_t>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_SerializedTransformBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedTransformBytes;
}
constexpr ::ArrayW<uint8_t> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_SerializedTransformBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedTransformBytes;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_SerializedTransformBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SerializedTransformBytes = value;
}
constexpr ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Prototype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Prototype;
}
constexpr ::UnityW<::MA::Flora::FloraAdditionalRendererSettings> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Prototype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Prototype;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_Prototype(::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Prototype = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_LinkedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkedObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>* const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_LinkedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkedObjects;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_LinkedObjects(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinkedObjects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Transform = value;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_InstanceHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceHandles;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_InstanceHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceHandles;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_InstanceHandles(::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceHandles = value;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_LocalTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalTransforms;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform> const& MA::Flora::FloraInstanceContainer::__cordl_internal_get_m_LocalTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalTransforms;
}
constexpr void MA::Flora::FloraInstanceContainer::__cordl_internal_set_m_LocalTransforms(::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalTransforms = value;
}
inline void MA::Flora::FloraInstanceContainer::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraInstanceContainer::get_Prefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_Prefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::set_Prefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"set_Prefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::FloraInstanceContainer::get_InstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_InstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraInstanceContainer::get_InstanceHandles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_InstanceHandles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> MA::Flora::FloraInstanceContainer::get_LocalTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"get_LocalTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::OnSystemWasCreated(::MA::Flora::FloraSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnSystemWasCreated", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, system);
}
inline void MA::Flora::FloraInstanceContainer::OnSystemWillBeDestroyed(::MA::Flora::FloraSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"OnSystemWillBeDestroyed", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, system);
}
inline void MA::Flora::FloraInstanceContainer::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraInstanceContainer::GetInstanceHandle(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, instanceIndex);
}
inline bool MA::Flora::FloraInstanceContainer::IsValidIndex(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"IsValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceIndex);
}
inline bool MA::Flora::FloraInstanceContainer::IsInstanceEnabled(int32_t  instanceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"IsInstanceEnabled", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceIndex);
}
inline void MA::Flora::FloraInstanceContainer::SetInstanceEnabled(int32_t  instanceIndex, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"SetInstanceEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, enabled);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceContainer::GetInstanceTransform(int32_t  instanceIndex, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceTransform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(this, ___internal_method, instanceIndex, space);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> MA::Flora::FloraInstanceContainer::GetInstanceTransforms(::UnityEngine::Space  space, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::Space>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(this, ___internal_method, space, allocator);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceContainer::GetInstancePosition(int32_t  instanceIndex, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstancePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, instanceIndex, space);
}
inline ::UnityEngine::Quaternion MA::Flora::FloraInstanceContainer::GetInstanceRotation(int32_t  instanceIndex, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, instanceIndex, space);
}
inline ::UnityEngine::Vector3 MA::Flora::FloraInstanceContainer::GetInstanceScale(int32_t  instanceIndex, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, instanceIndex, space);
}
inline ::UnityEngine::Bounds MA::Flora::FloraInstanceContainer::GetInstanceBounds(int32_t  instanceIndex, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, instanceIndex, space);
}
inline void MA::Flora::FloraInstanceContainer::ClearInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"ClearInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::EnsureCapacity(int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceCount);
}
inline void MA::Flora::FloraInstanceContainer::EnsureAdditionalCapacity(int32_t  additionalInstanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"EnsureAdditionalCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInstanceCount);
}
inline int32_t MA::Flora::FloraInstanceContainer::AddInstance(::MA::Flora::FloraInstanceTransform  newInstanceTransform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstance", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, newInstanceTransform, space);
}
inline void MA::Flora::FloraInstanceContainer::AddInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  instanceTransforms, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceTransforms, space);
}
inline void MA::Flora::FloraInstanceContainer::AddInstances(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"AddInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localToWorldMatrices);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstancePosition(int32_t  instanceIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstancePosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, position, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceRotation(int32_t  instanceIndex, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, rotation, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceScale(int32_t  instanceIndex, ::UnityEngine::Vector3  scale, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceScale", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, scale, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceTransform(int32_t  instanceIndex, ::MA::Flora::FloraInstanceTransform  newInstanceTransform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, newInstanceTransform, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceTransforms(int32_t  startInstanceIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  newInstanceTransforms, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startInstanceIndex, newInstanceTransforms, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  newInstanceTransforms, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, newInstanceTransforms, space);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrix(int32_t  instanceIndex, ::Unity::Mathematics::float4x4  newLocalToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceIndex, newLocalToWorld);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrices(int32_t  startInstanceIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  newLocalToWorldMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startInstanceIndex, newLocalToWorldMatrices);
}
inline void MA::Flora::FloraInstanceContainer::UpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  newLocalToWorldMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, newLocalToWorldMatrices);
}
inline void MA::Flora::FloraInstanceContainer::RemoveInstances(::Unity::Collections::NativeArray_1<int32_t>  instancesToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"RemoveInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instancesToRemove);
}
inline void MA::Flora::FloraInstanceContainer::RemoveInstance(int32_t  indexToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"RemoveInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexToRemove);
}
inline ::UnityEngine::Bounds MA::Flora::FloraInstanceContainer::CalculateBounds(::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, space);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::CalculateCombinedBoundsWithBurst(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateCombinedBoundsWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefabAABB, localTransforms, combinedAABB);
}
inline void MA::Flora::FloraInstanceContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"TransformInstancesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, transform);
}
inline void MA::Flora::FloraInstanceContainer::CalculateCombinedBoundsWithBurst$BurstManaged(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceContainer*>(),
                        {"CalculateCombinedBoundsWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefabAABB, localTransforms, combinedAABB);
}
inline ::MA::Flora::FloraInstanceContainer* MA::Flora::FloraInstanceContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraInstanceContainer*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  MA::Flora::FloraInstanceContainer::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* MA::Flora::FloraInstanceContainer::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceContainer::FloraInstanceContainer()   {
}
