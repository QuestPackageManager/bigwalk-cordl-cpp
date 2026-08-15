#pragma once
// IWYU pragma private; include "MA/Flora/ComputeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__ComputeUtility_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::MA::Flora::ComputeUtility.WrapGroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t)>(&::MA::Flora::ComputeUtility::WrapGroupCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f7880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"WrapGroupCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.WrapDispatchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, int32_t)>(&::MA::Flora::ComputeUtility::WrapDispatchCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"WrapDispatchCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.UnwrapLinearGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Mathematics::int3)>(&::MA::Flora::ComputeUtility::UnwrapLinearGroupID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f77c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"UnwrapLinearGroupID", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.UnwrapLinearDispatchThreadID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Mathematics::int3, int32_t, int32_t)>(&::MA::Flora::ComputeUtility::UnwrapLinearDispatchThreadID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"UnwrapLinearDispatchThreadID", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.DispatchCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::Unity::Mathematics::int3)>(&::MA::Flora::ComputeUtility::DispatchCompute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f76c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"DispatchCompute", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.DispatchCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, ::Unity::Mathematics::int3)>(&::MA::Flora::ComputeUtility::DispatchCompute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f7700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"DispatchCompute", {}, {::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ComputeUtility.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, int32_t, ::Unity::Mathematics::int3)>(&::MA::Flora::ComputeUtility::Dispatch)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f7740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::int3 MA::Flora::ComputeUtility::WrapGroupCount(int32_t  targetGroupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"WrapGroupCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, targetGroupCount);
}
inline ::Unity::Mathematics::int3 MA::Flora::ComputeUtility::WrapDispatchCount(int32_t  dispatchThreadCount, int32_t  groupSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"WrapDispatchCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, dispatchThreadCount, groupSize);
}
inline int32_t MA::Flora::ComputeUtility::UnwrapLinearGroupID(::Unity::Mathematics::int3  wrappedGroupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"UnwrapLinearGroupID", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, wrappedGroupID);
}
inline int32_t MA::Flora::ComputeUtility::UnwrapLinearDispatchThreadID(::Unity::Mathematics::int3  wrappedGroupID, int32_t  groupThreadIndex, int32_t  threadGroupSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"UnwrapLinearDispatchThreadID", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, wrappedGroupID, groupThreadIndex, threadGroupSize);
}
inline void MA::Flora::ComputeUtility::DispatchCompute(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"DispatchCompute", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, computeShader, kernelIndex, threadGroups);
}
inline void MA::Flora::ComputeUtility::DispatchCompute(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"DispatchCompute", {}, {::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, computeShader, kernelIndex, threadGroups);
}
inline void MA::Flora::ComputeUtility::Dispatch(::UnityEngine::ComputeShader*  cs, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ComputeUtility*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cs, kernelIndex, threadGroups);
}
// Ctor Parameters []
constexpr ::MA::Flora::ComputeUtility::ComputeUtility()   {
}
