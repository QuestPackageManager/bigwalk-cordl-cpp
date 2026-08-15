#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TargetPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TargetPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TargetPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TargetPool::*)()>(&::UnityEngine::Rendering::PostProcessing::TargetPool::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fd1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TargetPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::TargetPool::*)()>(&::UnityEngine::Rendering::PostProcessing::TargetPool::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fd1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TargetPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::TargetPool::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::TargetPool::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fd1a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TargetPool.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TargetPool::*)()>(&::UnityEngine::Rendering::PostProcessing::TargetPool::Reset)> {
  constexpr static std::size_t size = 0xff90;
  constexpr static std::size_t addrs = 0x181292ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_get_m_Pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pool;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_get_m_Pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pool;
}
constexpr void UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_set_m_Pool(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pool = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_get_m_Current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Current;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_get_m_Current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Current;
}
constexpr void UnityEngine::Rendering::PostProcessing::TargetPool::__cordl_internal_set_m_Current(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Current = value;
}
inline void UnityEngine::Rendering::PostProcessing::TargetPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::PostProcessing::TargetPool::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::PostProcessing::TargetPool::Get(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void UnityEngine::Rendering::PostProcessing::TargetPool::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TargetPool*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::TargetPool* UnityEngine::Rendering::PostProcessing::TargetPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::TargetPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TargetPool::TargetPool()   {
}
