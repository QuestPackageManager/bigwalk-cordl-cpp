#pragma once
// IWYU pragma private; include "MA/Flora/FloraSpatialHashAccess.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraSpatialHashAccess_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceFilter_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraSpatialHashAccess_def.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814b1550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1790;
  constexpr static std::size_t addrs = 0x181309030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814b1360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, includeTags, excludeTags, planes, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, includeTags, excludeTags, planes, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814b0f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814b1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b1180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, includeTags, excludeTags, planes, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall::FloraSpatialHashAccess_CullInstancesInSelectionPlanesWithBurst_000005D3$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814be840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814bf690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, sphere, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, sphere, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bf2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bf3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814bf500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, sphere, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingSphereWithBurst_000005D4$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x181308320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814bed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, filter, sphere, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, filter, sphere, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814be900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814beb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, sphere, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D5$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x181308320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814bf1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, prefabGameObjectIDs, sphere, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, prefabGameObjectIDs, sphere, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814bf030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, sphere, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingSphereMatchingWithBurst_000005D6$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814be840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814be750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, bounds, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, bounds, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814be270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814be3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814be4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, bounds, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingBoxWithBurst_000005D7$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x181308320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814bdaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, filter, bounds, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, filter, bounds, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bd5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814bd820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, bounds, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D8$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x181308320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814be1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, prefabGameObjectIDs, bounds, allocator, instances);
}
inline ::System::IAsyncResult* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::BeginInvoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hash, prefabGameObjectIDs, bounds, allocator, instances, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate* MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bdc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814bded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>();
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::Invoke(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, bounds, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall::FloraSpatialHashAccess_FindInstancesIntersectingBoxMatchingWithBurst_000005D9$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.CullInstancesInSelectionPlanesWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::CullInstancesInSelectionPlanesWithBurst)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b1180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"CullInstancesInSelectionPlanesWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereWithBurst)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814bf500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereMatchingWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814beb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereMatchingWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814bf030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bfb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxMatchingWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bfa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxMatchingWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bfa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.CullInstancesInSelectionPlanesWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::CullInstancesInSelectionPlanesWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bf740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"CullInstancesInSelectionPlanesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bfc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814bfb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::UnityEngine::BoundingSphere>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814bfbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814bfa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::MA::Flora::FloraInstanceFilter>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814bf7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSpatialHashAccess.FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::MA::Flora::AxisAlignedBox>, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>)>(&::MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814bf8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSpatialHashAccess::CullInstancesInSelectionPlanesWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"CullInstancesInSelectionPlanesWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, includeTags, excludeTags, planes, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, bounds, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, bounds, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, bounds, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::CullInstancesInSelectionPlanesWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  planes, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"CullInstancesInSelectionPlanesWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, includeTags, excludeTags, planes, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::UnityEngine::BoundingSphere>  sphere, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingSphereMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::UnityEngine::BoundingSphere>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, sphere, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, bounds, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::MA::Flora::FloraInstanceFilter>  filter, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceFilter>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, filter, bounds, allocator, instances);
}
inline void MA::Flora::FloraSpatialHashAccess::FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged(::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>  hash, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  prefabGameObjectIDs, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds, ::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>  allocator, ::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSpatialHashAccess*>(),
                        {"FindInstancesIntersectingBoxMatchingWithBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_AllocatorHandle>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, prefabGameObjectIDs, bounds, allocator, instances);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSpatialHashAccess::FloraSpatialHashAccess()   {
}
