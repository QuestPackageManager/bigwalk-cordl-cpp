#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComputeBufferScope_1.hpp"
#include "UnityEngine/Splines/zzzz__SplineComputeBufferScope_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
template<typename T>
inline void UnityEngine::Splines::SplineComputeBufferScope_1<T>::_ctor(T  spline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spline);
}
template<typename T>
inline void UnityEngine::Splines::SplineComputeBufferScope_1<T>::Bind(::UnityEngine::ComputeShader*  shader, int32_t  kernel, ::StringW  info, ::StringW  curves, ::StringW  lengths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shader, kernel, info, curves, lengths);
}
template<typename T>
inline void UnityEngine::Splines::SplineComputeBufferScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Splines::SplineComputeBufferScope_1<T>::Upload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"Upload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Vector4 UnityEngine::Splines::SplineComputeBufferScope_1<T>::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::ComputeBuffer* UnityEngine::Splines::SplineComputeBufferScope_1<T>::get_Curves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"get_Curves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::ComputeBuffer* UnityEngine::Splines::SplineComputeBufferScope_1<T>::get_CurveLengths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComputeBufferScope_1<T>>(),
                        {"get_CurveLengths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::Splines::SplineComputeBufferScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::Splines::SplineComputeBufferScope_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Spline", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_KnotCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LengthBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Shader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Info", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Curves", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveLengths", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Kernel", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::Splines::SplineComputeBufferScope_1<T>::SplineComputeBufferScope_1(T  m_Spline, int32_t  m_KnotCount, ::UnityEngine::ComputeBuffer*  m_CurveBuffer, ::UnityEngine::ComputeBuffer*  m_LengthBuffer, ::UnityW<::UnityEngine::ComputeShader>  m_Shader, ::StringW  m_Info, ::StringW  m_Curves, ::StringW  m_CurveLengths, int32_t  m_Kernel) noexcept  {
this->m_Spline = m_Spline;
this->m_KnotCount = m_KnotCount;
this->m_CurveBuffer = m_CurveBuffer;
this->m_LengthBuffer = m_LengthBuffer;
this->m_Shader = m_Shader;
this->m_Info = m_Info;
this->m_Curves = m_Curves;
this->m_CurveLengths = m_CurveLengths;
this->m_Kernel = m_Kernel;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::SplineComputeBufferScope_1<T>::SplineComputeBufferScope_1()   {
}
