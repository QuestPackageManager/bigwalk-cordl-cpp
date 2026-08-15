#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenLODGroupData.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenLODGroupData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenLODGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData (*)(::UnityEngine::Rendering::GPUDrivenLODGroupData)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenLODGroupData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ece000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.op_Implicit___UnityEngine__Rendering__GPUDrivenLODGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUDrivenLODGroupData (*)(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::op_Implicit___UnityEngine__Rendering__GPUDrivenLODGroupData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ece000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodGroupID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ecdf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_fadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_fadeMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_fadeMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_worldSpaceReferencePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_worldSpaceReferencePoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_worldSpaceReferencePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_worldSpaceSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_worldSpaceSize)> {
  constexpr static std::size_t size = 0xbb40;
  constexpr static std::size_t addrs = 0x180e3e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_worldSpaceSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_renderersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int16_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_renderersCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181788310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_renderersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lastLODIsBillboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<bool> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lastLODIsBillboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f1380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lastLODIsBillboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_invalidLODGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_invalidLODGroupID)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ecdeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_invalidLODGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodRenderersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int16_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodRenderersCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodRenderersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodScreenRelativeTransitionHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodScreenRelativeTransitionHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodScreenRelativeTransitionHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData.get_lodFadeTransitionWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<float_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodFadeTransitionWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodFadeTransitionWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenLODGroupData(::UnityEngine::Rendering::GPUDrivenLODGroupData  lodGroupData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenLODGroupData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(nullptr, ___internal_method, lodGroupData);
}
inline ::UnityEngine::Rendering::GPUDrivenLODGroupData MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::op_Implicit___UnityEngine__Rendering__GPUDrivenLODGroupData(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData  lodGroupData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUDrivenLODGroupData>(nullptr, ___internal_method, lodGroupData);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_fadeMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_fadeMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_worldSpaceReferencePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_worldSpaceReferencePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<float_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_worldSpaceSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_worldSpaceSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int16_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_renderersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_renderersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int16_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<bool> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lastLODIsBillboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lastLODIsBillboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<bool>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_invalidLODGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_invalidLODGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int16_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodRenderersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodRenderersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int16_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<float_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodScreenRelativeTransitionHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodScreenRelativeTransitionHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<float_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::get_lodFadeTransitionWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>(),
                        {"get_lodFadeTransitionWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<float_t>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LODGroupData", ty: "::UnityEngine::Rendering::GPUDrivenLODGroupData", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::UnityGPUDrivenLODGroupData(::UnityEngine::Rendering::GPUDrivenLODGroupData  m_LODGroupData) noexcept  {
this->m_LODGroupData = m_LODGroupData;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData::UnityGPUDrivenLODGroupData()   {
}
