#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IDetailModifier.hpp"
#include "JBooth/MicroVerseCore/zzzz__IDetailModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ISpawner_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.NeedDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IDetailModifier::*)()>(&::JBooth::MicroVerseCore::IDetailModifier::NeedDetailClear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.ApplyDetailClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IDetailModifier::*)(::JBooth::MicroVerseCore::DetailData*)>(&::JBooth::MicroVerseCore::IDetailModifier::ApplyDetailClear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.ApplyDetailStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IDetailModifier::*)(::JBooth::MicroVerseCore::DetailData*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::IDetailModifier::ApplyDetailStamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.InqDetailPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IDetailModifier::*)(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*)>(&::JBooth::MicroVerseCore::IDetailModifier::InqDetailPrototypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IDetailModifier::*)()>(&::JBooth::MicroVerseCore::IDetailModifier::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IDetailModifier::*)()>(&::JBooth::MicroVerseCore::IDetailModifier::NeedFlowMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IDetailModifier.NeedSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IDetailModifier::*)()>(&::JBooth::MicroVerseCore::IDetailModifier::NeedSDF)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool JBooth::MicroVerseCore::IDetailModifier::NeedDetailClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::IDetailModifier::ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, td);
}
inline void JBooth::MicroVerseCore::IDetailModifier::ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dd, resultBuffers, od);
}
inline void JBooth::MicroVerseCore::IDetailModifier::InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prototypes);
}
inline bool JBooth::MicroVerseCore::IDetailModifier::NeedCurvatureMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IDetailModifier::NeedFlowMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IDetailModifier::NeedSDF()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IDetailModifier*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr  JBooth::MicroVerseCore::IDetailModifier::operator ::JBooth::MicroVerseCore::ISpawner*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* JBooth::MicroVerseCore::IDetailModifier::i___JBooth__MicroVerseCore__ISpawner() noexcept {
return static_cast<::JBooth::MicroVerseCore::ISpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::IDetailModifier::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::IDetailModifier::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
