#pragma once
// IWYU pragma private; include "MA/Flora/DisposableBatchCullingContext.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_impl.hpp"
#include "MA/Flora/zzzz__DisposableBatchCullingContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
//  Writing Method size for method: ::MA::Flora::DisposableBatchCullingContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DisposableBatchCullingContext::*)(::UnityEngine::Rendering::BatchCullingContext)>(&::MA::Flora::DisposableBatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181454160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DisposableBatchCullingContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DisposableBatchCullingContext::*)()>(&::MA::Flora::DisposableBatchCullingContext::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181457ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DisposableBatchCullingContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::DisposableBatchCullingContext::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::DisposableBatchCullingContext::Dispose)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18145b8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DisposableBatchCullingContext.op_Implicit___UnityEngine__Rendering__BatchCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchCullingContext (*)(::MA::Flora::DisposableBatchCullingContext)>(&::MA::Flora::DisposableBatchCullingContext::op_Implicit___UnityEngine__Rendering__BatchCullingContext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18145ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::DisposableBatchCullingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DisposableBatchCullingContext.op_Implicit___MA__Flora__DisposableBatchCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Rendering::BatchCullingContext)>(&::MA::Flora::DisposableBatchCullingContext::op_Implicit___MA__Flora__DisposableBatchCullingContext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18145ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::DisposableBatchCullingContext::_ctor(::UnityEngine::Rendering::BatchCullingContext  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::DisposableBatchCullingContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle MA::Flora::DisposableBatchCullingContext::Dispose(::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, dependency);
}
inline ::UnityEngine::Rendering::BatchCullingContext MA::Flora::DisposableBatchCullingContext::op_Implicit___UnityEngine__Rendering__BatchCullingContext(::MA::Flora::DisposableBatchCullingContext  disposable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::DisposableBatchCullingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchCullingContext>(nullptr, ___internal_method, disposable);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::DisposableBatchCullingContext::op_Implicit___MA__Flora__DisposableBatchCullingContext(::UnityEngine::Rendering::BatchCullingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DisposableBatchCullingContext>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, context);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::DisposableBatchCullingContext::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::DisposableBatchCullingContext::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Rendering::BatchCullingContext", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DisposableBatchCullingContext::DisposableBatchCullingContext(::UnityEngine::Rendering::BatchCullingContext  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::MA::Flora::DisposableBatchCullingContext::DisposableBatchCullingContext()   {
}
