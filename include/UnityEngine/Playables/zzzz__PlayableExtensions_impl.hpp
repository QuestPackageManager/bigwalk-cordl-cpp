#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableExtensions_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
template<typename U>
inline bool UnityEngine::Playables::PlayableExtensions::IsValid(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"IsValid", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::Destroy(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"Destroy", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable);
}
template<typename U>
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableExtensions::GetGraph(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetGraph", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::Play(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"Play", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::Pause(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"Pause", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::SetSpeed(U  playable, double_t  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"SetSpeed", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<double_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template<typename U>
inline double_t UnityEngine::Playables::PlayableExtensions::GetSpeed(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetSpeed", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::SetDuration(U  playable, double_t  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"SetDuration", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<double_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::SetTime(U  playable, double_t  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"SetTime", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<double_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template<typename U>
inline double_t UnityEngine::Playables::PlayableExtensions::GetTime(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetTime", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::SetInputCount(U  playable, int32_t  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"SetInputCount", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template<typename U>
inline int32_t UnityEngine::Playables::PlayableExtensions::GetInputCount(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetInputCount", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playable);
}
template<typename U>
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableExtensions::GetInput(U  playable, int32_t  inputPort)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetInput", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable, inputPort);
}
template<typename U>
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableExtensions::GetOutput(U  playable, int32_t  outputPort)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"GetOutput", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable, outputPort);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::SetInputWeight(U  playable, int32_t  inputIndex, float_t  weight)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"SetInputWeight", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, inputIndex, weight);
}
template<typename U>
inline void UnityEngine::Playables::PlayableExtensions::DisconnectInput(U  playable, int32_t  inputPort)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                    {"DisconnectInput", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, inputPort);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableExtensions::PlayableExtensions()   {
}
